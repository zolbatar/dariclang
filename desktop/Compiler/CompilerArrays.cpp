#include "Compiler.h"

void Compiler::TokenDim(ParserToken &t) {
    auto signature = TypeSignature::Get(t.signature).get();
    auto call = BuildTypeCall(t);

    // We don't want to allow local string or record arrays as they are TROUBLE, use collections!
    if (signature->GetScope() == Scope::LOCAL) {
        switch (signature->GetClass()) {
            case SignatureClass::PrimitiveArray: {
                auto ct = dynamic_cast<TypePrimitiveArray *>(signature);
                if (ct->GetPrimitiveType(call) == Primitive::STRING) {
                    RaiseException("Local string arrays aren't allowed. Use collections.", t);
                }
                break;
            }
            case SignatureClass::RecordArray:
//            auto ct = dynamic_cast<TypeRecord *>(signature);
//            ct->SetPrimitiveType(from.type);
                break;
            default:
                assert(0);
        }
    }

    signature->Create(call);
}
