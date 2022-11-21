#include "Compiler.h"

void Compiler::SetupLibrary() {
    library.insert(std::make_pair("MODE", LibraryFunc{
            .func_name = "gfx2d_mode",
            .return_Type=Primitive::NONE,
            .parameters={Primitive::INT, Primitive::INT, Primitive::INT}}));
    llvm.Module->getOrInsertFunction("gfx2d_mode", llvm.TypeNone, llvm.TypeInt, llvm.TypeInt, llvm.TypeInt);

    library.insert(std::make_pair("ORIGIN", LibraryFunc{
            .func_name = "gfx2d_origin",
            .return_Type=Primitive::NONE,
            .parameters={Primitive::INT, Primitive::INT}}));
    llvm.Module->getOrInsertFunction("gfx2d_origin", llvm.TypeNone, llvm.TypeInt, llvm.TypeInt);

    library.insert(std::make_pair("PLOT", LibraryFunc{
            .func_name = "gfx2d_plot",
            .return_Type=Primitive::NONE,
            .parameters={Primitive::INT, Primitive::INT}}));
    llvm.Module->getOrInsertFunction("gfx2d_plot", llvm.TypeNone, llvm.TypeInt, llvm.TypeInt);

    library.insert(std::make_pair("LINE", LibraryFunc{
            .func_name = "gfx2d_line",
            .return_Type=Primitive::NONE,
            .parameters={Primitive::INT, Primitive::INT, Primitive::INT, Primitive::INT}}));
    llvm.Module->getOrInsertFunction("gfx2d_line", llvm.TypeNone, llvm.TypeInt, llvm.TypeInt, llvm.TypeInt, llvm.TypeInt);

    library.insert(std::make_pair("SWIDTH", LibraryFunc{
            .func_name = "gfx2d_swidth",
            .return_Type=Primitive::INT,
            .parameters={}}));
    llvm.Module->getOrInsertFunction("gfx2d_swidth", llvm.TypeInt);

    library.insert(std::make_pair("SHEIGHT", LibraryFunc{
            .func_name = "gfx2d_sheight",
            .return_Type=Primitive::INT,
            .parameters={}}));
    llvm.Module->getOrInsertFunction("gfx2d_sheight", llvm.TypeInt);

    library.insert(std::make_pair("FLIP", LibraryFunc{
            .func_name = "gfx2d_flip",
            .return_Type=Primitive::NONE,
            .parameters={}}));
    llvm.Module->getOrInsertFunction("gfx2d_flip", llvm.TypeNone);

    library.insert(std::make_pair("CLS", LibraryFunc{
            .func_name = "gfx2d_cls",
            .return_Type=Primitive::NONE,
            .parameters={}}));
    llvm.Module->getOrInsertFunction("gfx2d_cls", llvm.TypeNone);

    library.insert(std::make_pair("FG", LibraryFunc{
            .func_name = "gfx2d_fg",
            .return_Type=Primitive::NONE,
            .parameters={Primitive::INT, Primitive::INT, Primitive::INT}}));
    llvm.Module->getOrInsertFunction("gfx2d_fg", llvm.TypeNone, llvm.TypeInt, llvm.TypeInt, llvm.TypeInt);

    library.insert(std::make_pair("BG", LibraryFunc{
            .func_name = "gfx2d_bg",
            .return_Type=Primitive::NONE,
            .parameters={Primitive::INT, Primitive::INT, Primitive::INT}}));
    llvm.Module->getOrInsertFunction("gfx2d_bg", llvm.TypeNone, llvm.TypeInt, llvm.TypeInt, llvm.TypeInt);
}
