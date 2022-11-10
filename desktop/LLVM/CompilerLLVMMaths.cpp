#include "CompilerLLVM.h"

ValueType CompilerLLVM::MathsAdd(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
    AutoConversion2Way(ir, t1, t2);
    ValueType vt;
    vt.type = t1.type;
    switch (t1.type) {
        case Primitive::INT:
        case Primitive::BYTE:
            vt.value = ir->CreateAdd(t1.value, t2.value);
            break;
        case Primitive::FLOAT:
            vt.value = ir->CreateFAdd(t1.value, t2.value);
            break;
        default:
            assert(0);
    }
    return vt;
}

ValueType CompilerLLVM::MathsMinus(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
    AutoConversion2Way(ir, t1, t2);
    ValueType vt;
    vt.type = t1.type;
    switch (t1.type) {
        case Primitive::INT:
        case Primitive::BYTE:
            vt.value = ir->CreateSub(t1.value, t2.value);
            break;
        case Primitive::FLOAT:
            vt.value = ir->CreateFSub(t1.value, t2.value);
            break;
        default:
            assert(0);
    }
    return vt;
}

ValueType CompilerLLVM::MathsMultiply(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
    AutoConversion2Way(ir, t1, t2);
    ValueType vt;
    vt.type = t1.type;
    switch (t1.type) {
        case Primitive::INT:
        case Primitive::BYTE:
            vt.value = ir->CreateMul(t1.value, t2.value);
            break;
        case Primitive::FLOAT:
            vt.value = ir->CreateFMul(t1.value, t2.value);
            break;
        default:
            assert(0);
    }
    return vt;
}

ValueType CompilerLLVM::MathsDivide(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
    AutoConversion2Way(ir, t1, t2);
    ValueType vt;
    vt.type = t1.type;
    switch (t1.type) {
        case Primitive::INT:
        case Primitive::BYTE:
            vt.value = ir->CreateSDiv(t1.value, t2.value);
            break;
        case Primitive::FLOAT:
            vt.value = ir->CreateFDiv(t1.value, t2.value);
            break;
        default:
            assert(0);
    }
    return vt;
}

ValueType CompilerLLVM::MathsHat(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
    AutoConversion2Way(ir, t1, t2);
    ValueType vt;
    vt.type = Primitive::FLOAT;
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    switch (t2.type) {
        case Primitive::INT:
        case Primitive::BYTE: {
            auto fun = llvm::Intrinsic::getDeclaration(Module.get(), llvm::Intrinsic::powi, {TypeFloat, TypeInt});
            vt.value = ir->CreateCall(fun, {t1.value, t2.value});
            break;
        }
        case Primitive::FLOAT: {
            auto fun = llvm::Intrinsic::getDeclaration(Module.get(), llvm::Intrinsic::pow, {TypeFloat, TypeFloat});
            vt.value = ir->CreateCall(fun, {t1.value, t2.value});
            break;
        }
        default:
            assert(0);
    }
    return vt;
}

ValueType CompilerLLVM::MathsSHL(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
    auto t = Primitive::INT;
    AutoConversion(ir, t1, t);
    AutoConversion(ir, t2, t);

    // Shift and return
    ValueType vt;
    vt.type = t;
    vt.value = ir->CreateShl(t1.value, t2.value);
    return vt;
}

ValueType CompilerLLVM::MathsSHR(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
    auto t = Primitive::INT;
    AutoConversion(ir, t1, t);
    AutoConversion(ir, t2, t);

    // Shift and return
    ValueType vt;
    vt.type = t;
    vt.value = ir->CreateLShr(t1.value, t2.value);
    return vt;
}

ValueType CompilerLLVM::MathsMOD(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
    auto t = Primitive::INT;
    AutoConversion(ir, t1, t);
    AutoConversion(ir, t2, t);

    // Shift and return
    ValueType vt;
    vt.type = t;
    auto r = ir->CreateSDiv(t1.value, t2.value);
    auto r2 = ir->CreateMul(r, t2.value);
    vt.value = ir->CreateSub(t1.value, r2);
    return vt;
}

ValueType CompilerLLVM::MathsDIV(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
    auto t = Primitive::INT;
    AutoConversion(ir, t1, t);
    AutoConversion(ir, t2, t);

    // Shift and return
    ValueType vt;
    vt.type = t;
    vt.value = ir->CreateSDiv(t1.value, t2.value);
    return vt;
}

ValueType CompilerLLVM::MathsABS(llvm::IRBuilder<> *ir, ValueType &t1) {
    ValueType vt;
    vt.type = t1.type;
    vt.value = t1.value;
    if (t1.type == Primitive::INT) {
        auto fun = llvm::Intrinsic::getDeclaration(Module.get(), llvm::Intrinsic::abs, {TypeInt, TypeBit});
        vt.value = ir->CreateCall(fun, {vt.value, llvm::ConstantInt::get(TypeBit, 0)});
        return vt;
    }
    if (t1.type == Primitive::FLOAT) {
        auto fun = llvm::Intrinsic::getDeclaration(Module.get(), llvm::Intrinsic::fabs, {TypeFloat});
        vt.value = ir->CreateCall(fun, {vt.value});
        return vt;
    }
    assert(0);
    return vt;
}

ValueType CompilerLLVM::MathsSQR(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateIntrinsic(llvm::Intrinsic::sqrt, {TypeFloat}, {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsLN(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateIntrinsic(llvm::Intrinsic::log, {TypeFloat}, {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsLOG(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateIntrinsic(llvm::Intrinsic::log10, {TypeFloat}, {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsEXP(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateIntrinsic(llvm::Intrinsic::exp, {TypeFloat}, {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsSIN(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateIntrinsic(llvm::Intrinsic::sin, {TypeFloat}, {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsCOS(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateIntrinsic(llvm::Intrinsic::cos, {TypeFloat}, {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsTAN(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateCall(Module->getFunction("tan"), {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsASN(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateCall(Module->getFunction("asin"), {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsACS(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateCall(Module->getFunction("acos"), {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsATN(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateCall(Module->getFunction("atan"), {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsPI(llvm::IRBuilder<> *ir) {
    ValueType t;
    t.type = Primitive::FLOAT;
    t.value = ir->CreateCall(Module->getFunction("pi"), {});
    return t;
}

ValueType CompilerLLVM::MathsRAD(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateCall(Module->getFunction("rad"), {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsDEG(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateCall(Module->getFunction("deg"), {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsSGN(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    ValueType vt;
    vt.type = Primitive::INT;
    vt.value = ir->CreateCall(Module->getFunction("sgn"), {t1.value});
    return vt;
}

ValueType CompilerLLVM::MathsFLOOR(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateIntrinsic(llvm::Intrinsic::floor, {TypeFloat}, {t1.value});
    return t1;
}

ValueType CompilerLLVM::MathsROUND(llvm::IRBuilder<> *ir, ValueType &t1) {
    auto t = Primitive::FLOAT;
    AutoConversion(ir, t1, t);
    t1.value = ir->CreateIntrinsic(llvm::Intrinsic::round, {TypeFloat}, {t1.value});
    return t1;
}
