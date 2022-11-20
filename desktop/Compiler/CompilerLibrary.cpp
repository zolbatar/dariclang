#include "Compiler.h"

void Compiler::SetupLibrary() {

    library.insert(std::make_pair("MODE", LibraryFunc{
            .func_name = "gfx2d_mode",
            .return_Type=Primitive::NONE,
            .parameters={Primitive::INT, Primitive::INT}}));
    library.insert(std::make_pair("Mode", LibraryFunc{
            .func_name = "gfx2d_mode",
            .return_Type=Primitive::NONE,
            .parameters={Primitive::INT, Primitive::INT}}));
    llvm.Module->getOrInsertFunction("gfx2d_mode", llvm.TypeNone, llvm.TypeInt, llvm.TypeInt);
}