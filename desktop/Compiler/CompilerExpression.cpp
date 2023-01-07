#include "Compiler.h"

ValueType Compiler::CompileExpression(ParserToken &t) {
    // Recurse through all children, auto converting types as necessary

    switch (t.type) {
        case ParserTokenType::LITERAL: {
            switch (t.data_type) {
                case Primitive::INT:
                    return ValueType{llvm.CreateConstantInt(t.data_type, t.literal.iv), t.data_type};
                case Primitive::FLOAT:
                    return ValueType{llvm.CreateConstantFloat(t.data_type, t.literal.fv), t.data_type};
                case Primitive::STRING:
                    return ValueType{
                            llvm.CreateConstantString(GetIR(), GetFunction(), t.data_type, t.literal.sv.c_str(), t.identifier),
                            t.data_type};
                case Primitive::BYTE:
                    return ValueType{llvm.CreateConstantInt(t.data_type, t.literal.iv), t.data_type};
                default:
                    RaiseException("Unexpected type", t);
            }
            break;
        }
        case ParserTokenType::VARIABLE: {
            auto signature = TypeSignature::Get(t.signature).get();
            auto call = BuildTypeCall(t);
            if (!signature->IsCreated()) {
                signature->Create(call);
            }
            return signature->Get(call);
        }
        case ParserTokenType::CALL: {
            auto rr = procedures.find(t.identifier);
            if (rr == procedures.end()) {

                // Check library
                auto lf = library.find(t.identifier);
                if (lf == library.end()) {
                    ProcedureNotFound(t, t.identifier);
                }

                // Return type?
                if (lf->second.return_Type == Primitive::NONE) {
                    RaiseException("No return type for procedure", t);
                }

                // Right number of parameters?
                if (t.children.size() != lf->second.parameters.size()) {
                    RaiseException("Parameter mismatch", t);
                }

                // Compile parameters
                std::vector<llvm::Value *> vals;
                auto i = 0;
                for (auto &s: t.children) {
                    auto vt = CompileExpression(s);
                    if (!lf->second.parameters[i].ConvertToOutputValue(vt, GetIR(), llvm)) {
                        RaiseException("Parameter mismatch", t);
                    }
                    vals.push_back(vt.value);
                    i++;
                }

                ValueType vt;
                vt.value = CreateCall(lf->second.func_name, vals);
                vt.type = lf->second.return_Type;

                // String, if so make permanent
                if (vt.type == Primitive::STRING) {
                    llvm.MakePermString(vt.value, GetIR());
                    strip_strings = true;
                }
                return vt;
            }
            auto f = &rr->second;

            // Return type?
            if (f->return_type == Primitive::NONE) {
                RaiseException("No return type for procedure", t);
            }

            // Right number of parameters?
            if (t.children.size() != f->parameters.size()) {
                RaiseException("Parameter mismatch", t);
            }

            // Compile parameters
            std::vector<llvm::Value *> vals;
            auto i = 0;
            for (auto &s: t.children) {
                auto vt = CompileExpression(s);
                if (!f->parameters[i].ConvertToOutputValue(vt, GetIR(), llvm)) {
                    RaiseException("Parameter mismatch", t);
                }
                vals.push_back(vt.value);
                i++;
            }

            ValueType vt;
            vt.value = CreateCall(t.identifier, llvm::ArrayRef(vals));
            vt.type = rr->second.return_type;

            // String, if so make permanent
            if (vt.type == Primitive::STRING) {
                llvm.MakePermString(vt.value, GetIR());
                strip_strings = true;
            }
            return vt;
        }
        case ParserTokenType::PI:
            return llvm.MathsPI(GetIR());
        case ParserTokenType::ADD:
        case ParserTokenType::MINUS:
        case ParserTokenType::DIVIDE:
        case ParserTokenType::MULTIPLY:
        case ParserTokenType::EQ:
        case ParserTokenType::NE:
        case ParserTokenType::LE:
        case ParserTokenType::LT:
        case ParserTokenType::GE:
        case ParserTokenType::GT:
        case ParserTokenType::OR:
        case ParserTokenType::AND:
        case ParserTokenType::EOR:
        case ParserTokenType::HAT:
        case ParserTokenType::SHL:
        case ParserTokenType::SHR:
        case ParserTokenType::MOD:
        case ParserTokenType::DIV: {
            auto t1 = CompileExpression(t.children[0]);
            auto t2 = CompileExpression(t.children[1]);
            switch (t.type) {
                case ParserTokenType::ADD: {
                    if (t1.type == Primitive::STRING && t2.type == Primitive::STRING) {
                        ValueType vt;
                        vt.type = Primitive::STRING;
                        vt.value = CreateCall("add_string", {t1.value, t2.value});
                        llvm.MakePermString(vt.value, GetIR());
                        strip_strings = true;
                        return vt;
                    } else {
                        return llvm.MathsAdd(GetIR(), t1, t2);
                    }
                }
                case ParserTokenType::MINUS:
                    return llvm.MathsMinus(GetIR(), t1, t2);
                case ParserTokenType::DIVIDE:
                    return llvm.MathsDivide(GetIR(), t1, t2);
                case ParserTokenType::MULTIPLY:
                    return llvm.MathsMultiply(GetIR(), t1, t2);
                case ParserTokenType::EQ:

                    return llvm.ComparisonEQ(GetIR(), t1, t2);
                case ParserTokenType::NE:
                    return llvm.ComparisonNE(GetIR(), t1, t2);
                case ParserTokenType::LE:
                    return llvm.ComparisonLE(GetIR(), t1, t2);
                case ParserTokenType::LT:
                    return llvm.ComparisonLT(GetIR(), t1, t2);
                case ParserTokenType::GE:
                    return llvm.ComparisonGE(GetIR(), t1, t2);
                case ParserTokenType::GT:
                    return llvm.ComparisonGT(GetIR(), t1, t2);
                case ParserTokenType::OR:
                    return llvm.BooleanOR(GetIR(), t1, t2);
                case ParserTokenType::AND:
                    return llvm.BooleanAND(GetIR(), t1, t2);
                case ParserTokenType::EOR:
                    return llvm.BooleanEOR(GetIR(), t1, t2);
                case ParserTokenType::HAT:
                    return llvm.MathsHat(GetIR(), t1, t2);
                case ParserTokenType::SHL:
                    return llvm.MathsSHL(GetIR(), t1, t2);
                case ParserTokenType::SHR:
                    return llvm.MathsSHR(GetIR(), t1, t2);
                case ParserTokenType::MOD:
                    return llvm.MathsMOD(GetIR(), t1, t2);
                case ParserTokenType::DIV:
                    return llvm.MathsDIV(GetIR(), t1, t2);
                default:
                    assert(0);
            }
            break;
        }
        case ParserTokenType::NOT:
        case ParserTokenType::COMPLEMENT:
        case ParserTokenType::ABS:
        case ParserTokenType::SQR:
        case ParserTokenType::LN:
        case ParserTokenType::LOG:
        case ParserTokenType::EXP:
        case ParserTokenType::SIN:
        case ParserTokenType::COS:
        case ParserTokenType::TAN:
        case ParserTokenType::ASN:
        case ParserTokenType::ACS:
        case ParserTokenType::ATN:
        case ParserTokenType::RAD:
        case ParserTokenType::DEG:
        case ParserTokenType::SGN:
        case ParserTokenType::FLOOR:
        case ParserTokenType::ROUND: {
            auto t1 = CompileExpression(t.children[0]);
            switch (t.type) {
                case ParserTokenType::NOT:
                    return llvm.BooleanNOT(GetIR(), t1);
                case ParserTokenType::COMPLEMENT:
                    return llvm.BooleanCOMPLEMENT(GetIR(), t1);
                case ParserTokenType::ABS:
                    return llvm.MathsABS(GetIR(), t1);
                case ParserTokenType::SQR:
                    return llvm.MathsSQR(GetIR(), t1);
                case ParserTokenType::LN:
                    return llvm.MathsLN(GetIR(), t1);
                case ParserTokenType::LOG:
                    return llvm.MathsLOG(GetIR(), t1);
                case ParserTokenType::EXP:
                    return llvm.MathsEXP(GetIR(), t1);
                case ParserTokenType::SIN:
                    return llvm.MathsSIN(GetIR(), t1);
                case ParserTokenType::COS:
                    return llvm.MathsCOS(GetIR(), t1);
                case ParserTokenType::TAN:
                    return llvm.MathsTAN(GetIR(), t1);
                case ParserTokenType::ASN:
                    return llvm.MathsASN(GetIR(), t1);
                case ParserTokenType::ACS:
                    return llvm.MathsACS(GetIR(), t1);
                case ParserTokenType::ATN:
                    return llvm.MathsATN(GetIR(), t1);
                case ParserTokenType::RAD:
                    return llvm.MathsRAD(GetIR(), t1);
                case ParserTokenType::DEG:
                    return llvm.MathsDEG(GetIR(), t1);
                case ParserTokenType::SGN:
                    return llvm.MathsSGN(GetIR(), t1);
                case ParserTokenType::FLOOR:
                    return llvm.MathsFLOOR(GetIR(), t1);
                case ParserTokenType::ROUND:
                    return llvm.MathsROUND(GetIR(), t1);
                default:
                    assert(0);
            }
            break;
        }
        case ParserTokenType::MIN: {
            auto t1 = CompileExpression(t.children[0]);
            auto t2 = CompileExpression(t.children[1]);
            return llvm.MathsMIN(GetIR(), t1, t2);
        }
        case ParserTokenType::MAX: {
            auto t1 = CompileExpression(t.children[0]);
            auto t2 = CompileExpression(t.children[1]);
            return llvm.MathsMAX(GetIR(), t1, t2);
        }
        case ParserTokenType::TRUE: {
            ValueType vt;
            vt.type = Primitive::INT;
            vt.value = llvm.CreateConstantInt(vt.type, 1);
            return vt;
        }
        case ParserTokenType::FALSE: {
            ValueType vt;
            vt.type = Primitive::INT;
            vt.value = llvm.CreateConstantInt(vt.type, 0);
            return vt;
        }

        case ParserTokenType::INT: {
            auto t1 = CompileExpression(t.children[0]);
            ValueType vt;
            switch (t1.type) {
                case Primitive::INT:
                    vt.value = t1.value;
                    vt.type = t1.type;
                    break;
                case Primitive::FLOAT:
                    vt.value = t1.value;
                    vt.type = t1.type;
                    llvm.AutoConversion(GetIR(), vt, Primitive::INT);
                    break;
                case Primitive::STRING:
                    vt.value = CreateCall("string_to_int", {t1.value});
                    vt.type = Primitive::INT;
                    break;
                default:
                    TypeError(t);
            }
            return vt;
        }
        case ParserTokenType::FLOAT: {
            auto t1 = CompileExpression(t.children[0]);
            ValueType vt;
            switch (t1.type) {
                case Primitive::FLOAT:
                    vt.value = t1.value;
                    vt.type = t1.type;
                    break;
                case Primitive::INT:
                    vt.value = t1.value;
                    vt.type = t1.type;
                    llvm.AutoConversion(GetIR(), vt, Primitive::FLOAT);
                    break;
                case Primitive::STRING:
                    vt.value = CreateCall("string_to_float", {t1.value});
                    vt.type = Primitive::FLOAT;
                    break;
                default:
                    TypeError(t);
            }
            return vt;
        }
        case ParserTokenType::STRING: {
            auto t1 = CompileExpression(t.children[0]);
            ValueType vt;
            vt.type = Primitive::STRING;
            switch (t1.type) {
                case Primitive::INT:
                    vt.value = CreateCall("int_to_string", {t1.value});
                    break;
                case Primitive::FLOAT:
                    vt.value = CreateCall("float_to_string", {t1.value});
                    break;
                case Primitive::STRING:
                    vt.value = t1.value;
                    break;
                default:
                    TypeError(t);
            }
            strip_strings = true;
            llvm.AddTempString(vt.value, GetIR());
            return vt;
        }
        case ParserTokenType::STRING_WITH_FORMAT: {
            auto t1 = CompileExpression(t.children[0]);
            auto t2 = CompileExpression(t.children[1]);
            if (t2.type != Primitive::STRING) {
                RaiseException("WITH clause must be a string", t);
            }
            ValueType vt;
            vt.type = Primitive::STRING;
            switch (t1.type) {
                case Primitive::INT:
                    vt.value = CreateCall("int_to_string_with", {t1.value, t2.value});
                    break;
                case Primitive::FLOAT:
                    vt.value = CreateCall("float_to_string_with", {t1.value, t2.value});
                    break;
                case Primitive::STRING:
                    vt.value = t1.value;
                    break;
                default:
                    TypeError(t);
            }
            strip_strings = true;
            llvm.AddTempString(vt.value, GetIR());
            return vt;
        }

        case ParserTokenType::UNARYMINUS: {
            ValueType vt = CompileExpression(t.children[0]);
            switch (vt.type) {
                case Primitive::INT:
                    vt.value = GetIR()->CreateNeg(vt.value);
                    break;
                case Primitive::FLOAT:
                    vt.value = GetIR()->CreateFNeg(vt.value);
                    break;
                default:
                    TypeError(t);
            }
            return vt;
        }

            // String
        case ParserTokenType::ASC: {
            ValueType vt = CompileExpression(t.children[0]);
            if (vt.type != Primitive::STRING) {
                TypeError(t);
            }
            vt.type = Primitive::INT;
            vt.value = CreateCall("asc", {vt.value});
            return vt;
        }
        case ParserTokenType::CHRS: {
            ValueType vt = CompileExpression(t.children[0]);
            llvm.AutoConversion(GetIR(), vt, Primitive::INT);
            if (vt.type != Primitive::INT) {
                TypeError(t);
            }
            vt.type = Primitive::STRING;
            vt.value = CreateCall("chrs", {vt.value});
            strip_strings = true;
            llvm.AddTempString(vt.value, GetIR());
            return vt;
        }
        case ParserTokenType::INSTR: {
            auto s = Primitive::STRING;
            auto i = Primitive::INT;
            ValueType vt1 = CompileExpression(t.children[0]);
            llvm.AutoConversion(GetIR(), vt1, s);
            ValueType vt2 = CompileExpression(t.children[1]);
            llvm.AutoConversion(GetIR(), vt2, s);
            ValueType vt3 = CompileExpression(t.children[2]);
            llvm.AutoConversion(GetIR(), vt3, i);
            ValueType vt;
            vt.type = i;
            vt.value = CreateCall("instr", {vt1.value, vt2.value, vt3.value});
            return vt;
        }
        case ParserTokenType::LEFTS: {
            auto s = Primitive::STRING;
            auto i = Primitive::INT;
            ValueType vt1 = CompileExpression(t.children[0]);
            llvm.AutoConversion(GetIR(), vt1, s);
            ValueType vt2 = CompileExpression(t.children[1]);
            llvm.AutoConversion(GetIR(), vt2, i);
            ValueType vt;
            vt.type = s;
            vt.value = CreateCall("lefts", {vt1.value, vt2.value});
            strip_strings = true;
            llvm.AddTempString(vt.value, GetIR());
            return vt;
        }
        case ParserTokenType::MIDS: {
            auto s = Primitive::STRING;
            auto i = Primitive::INT;
            ValueType vt1 = CompileExpression(t.children[0]);
            llvm.AutoConversion(GetIR(), vt1, s);
            ValueType vt2 = CompileExpression(t.children[1]);
            llvm.AutoConversion(GetIR(), vt2, i);
            ValueType vt3 = CompileExpression(t.children[2]);
            llvm.AutoConversion(GetIR(), vt3, i);
            ValueType vt;
            vt.type = s;
            vt.value = CreateCall("mids", {vt1.value, vt2.value, vt3.value});
            strip_strings = true;
            llvm.AddTempString(vt.value, GetIR());
            return vt;
        }
        case ParserTokenType::RIGHTS: {
            auto s = Primitive::STRING;
            auto i = Primitive::INT;
            ValueType vt1 = CompileExpression(t.children[0]);
            llvm.AutoConversion(GetIR(), vt1, s);
            ValueType vt2 = CompileExpression(t.children[1]);
            llvm.AutoConversion(GetIR(), vt2, i);
            ValueType vt;
            vt.type = s;
            vt.value = CreateCall("rights", {vt1.value, vt2.value});
            strip_strings = true;
            llvm.AddTempString(vt.value, GetIR());
            return vt;
        }
        case ParserTokenType::LEN: {
            ValueType vt = CompileExpression(t.children[0]);
            if (vt.type != Primitive::STRING) {
                TypeError(t);
            }
            vt.type = Primitive::INT;
            vt.value = CreateCall("len", {vt.value});
            return vt;
        }
        case ParserTokenType::SIZE: {
            auto signature = TypeSignature::Get(t.signature).get();
            auto call = BuildTypeCall(t);
            ValueType vt;
            vt.type = Primitive::INT;
            switch (signature->GetClass()) {
                case SignatureClass::Primitive:
                case SignatureClass::Record:
                    assert(0);
                case SignatureClass::PrimitiveArray:
                case SignatureClass::RecordArray:
                    vt.value = llvm.GetArraySize(signature->GetName(), GetIR());
                    break;
/*                case InstanceType::SET:
                    ref->GetInstance()->Get(vt, nullptr, 0, llvm, GetIR());
                    vt.value = CreateCall("set_size", {vt.value});
                    break;
                case InstanceType::QUEUE:
                    ref->GetInstance()->Get(vt, nullptr, 0, llvm, GetIR());
                    vt.value = CreateCall("queue_size", {vt.value});
                    break;
                case InstanceType::STACK:
                    ref->GetInstance()->Get(vt, nullptr, 0, llvm, GetIR());
                    vt.value = CreateCall("stack_size", {vt.value});
                    break;
                case InstanceType::LIST:
                    ref->GetInstance()->Get(vt, nullptr, 0, llvm, GetIR());
                    vt.value = CreateCall("list_size", {vt.value});
                    break;
                case InstanceType::VECTOR:
                    ref->GetInstance()->Get(vt, nullptr, 0, llvm, GetIR());
                    vt.value = CreateCall("vector_size", {vt.value});
                    break;
                case InstanceType::MAP:
                    ref->GetInstance()->Get(vt, nullptr, 0, llvm, GetIR());
                    vt.value = CreateCall("map_size", {vt.value});
                    break;*/
            }
            if (!vt.value) {
                RaiseException("Error getting size or array dimensions", t);
            }
            return vt;
        }
        case ParserTokenType::MAIN: {
            ValueType vt;
            vt.type = Primitive::INT;
            vt.value = llvm::ConstantInt::get(llvm.TypeInt, compiling_main_file);
            return vt;
        }
        case ParserTokenType::HAS: {
            auto expr = CompileExpression(t.children[0]);
            auto temp_name = GetScratchName(t.file.line);
            auto scratch = GetIR()->CreateAlloca(llvm.TypeConversion(expr.type), nullptr, temp_name);
            GetIR()->CreateStore(expr.value, scratch);

            // Var
            auto ref = Reference::Get(t.reference);
            if (!ref->InstanceExists())
                VariableNotFound(t, ref->GetName());
            if (!ref->FindInstanceUnknownInstanceType()) {
                VariableError(t, ref->GetName());
            }
            ValueType vt_var;
            ref->GetInstance()->Get(vt_var, nullptr, 0, llvm, GetIR());

            // Check key type
            if (expr.type != ref->GetInstance()->GetDataType()) {
                TypeError(t);
            }

            // Do lookup
            ValueType vt;
            vt.type = Primitive::INT;
            auto scratchptr = GetIR()->CreatePointerCast(scratch, llvm.TypeVoid);
            switch (ref->GetInstanceType()) {
                case InstanceType::SET: {
                    vt.value = CreateCall("set_contains", {vt_var.value, scratchptr});
                    break;
                }
                case InstanceType::MAP: {
                    vt.value = CreateCall("map_contains", {vt_var.value, scratchptr});
                    break;
                }
                default:
                    TypeError(t);
            }
            return vt;
        }
        default:
            assert(0);
    }

    return ValueType{nullptr, Primitive::NONE};
}

