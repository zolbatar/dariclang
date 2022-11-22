#include "Compiler.h"

void Compiler::AddLibraryCall(std::string name, std::string func, Primitive ret, std::string parameters) {
    std::vector<Primitive> pars;
    std::vector<llvm::Type *> pars_t;
    for (auto c: parameters) {
        switch (c) {
            case 'I':
                pars.push_back(Primitive::INT);
                pars_t.push_back(llvm.TypeInt);
                break;
            case 'F':
                pars.push_back(Primitive::FLOAT);
                pars_t.push_back(llvm.TypeFloat);
                break;
            default:
                assert(0);
        }
    }
    library.insert(std::make_pair(name, LibraryFunc{.func_name = func, .return_Type=ret, .parameters=pars}));
    llvm.Module->getOrInsertFunction(func, llvm::FunctionType::get(llvm.TypeConversion(ret), pars_t, false));
}

void Compiler::SetupLibrary() {

    // 2D Graphics
    AddLibraryCall("MODE", "gfx2d_mode", Primitive::NONE, "III");
    AddLibraryCall("ORIGIN", "gfx2d_origin", Primitive::NONE, "II");
    AddLibraryCall("SWIDTH", "gfx2d_swidth", Primitive::INT, "");
    AddLibraryCall("SHEIGHT", "gfx2d_sheight", Primitive::INT, "");
    AddLibraryCall("FLIP", "gfx2d_flip", Primitive::NONE, "");
    AddLibraryCall("CLS", "gfx2d_cls", Primitive::NONE, "");
    AddLibraryCall("PLOT", "gfx2d_plot", Primitive::NONE, "II");
    AddLibraryCall("TRIANGLE", "gfx2d_triangle", Primitive::NONE, "IIIIII");
    AddLibraryCall("TRIANGLEFILL", "gfx2d_trianglefilled", Primitive::NONE, "IIIIII");
    AddLibraryCall("TRIANGLESHADED", "gfx2d_triangleshaded", Primitive::NONE, "IIIIIIIII");
    AddLibraryCall("CIRCLE", "gfx2d_circle", Primitive::NONE, "III");
    AddLibraryCall("CIRCLEW", "gfx2d_circlew", Primitive::NONE, "IIII");
    AddLibraryCall("CIRCLEFILL", "gfx2d_circlefilled", Primitive::NONE, "III");
    AddLibraryCall("LINE", "gfx2d_line", Primitive::NONE, "IIII");
    AddLibraryCall("LINEW", "gfx2d_linew", Primitive::NONE, "IIIII");
    AddLibraryCall("FG", "gfx2d_fg", Primitive::NONE, "III");
    AddLibraryCall("BG", "gfx2d_bg", Primitive::NONE, "III");
    AddLibraryCall("COLOUR", "gfx2d_createcolour", Primitive::INT, "III");

    // Random
    AddLibraryCall("RND", "rndi", Primitive::INT, "I");
    AddLibraryCall("RNDF", "rndf", Primitive::FLOAT, "F");
}
