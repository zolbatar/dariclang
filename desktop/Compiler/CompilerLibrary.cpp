#include "Compiler.h"

void Compiler::AddLibraryCall(std::string name, std::string func, Primitive ret, std::string parameters) {
    std::vector<LibraryFuncParameter> pars;
    std::vector<llvm::Type *> pars_t;
    for (auto c: parameters) {
        switch (c) {
            case 'B':
                pars.push_back(LibraryFuncParameter(Primitive::BYTE, false));
                pars_t.push_back(llvm.TypeByte);
                break;
            case 'I':
                pars.push_back(LibraryFuncParameter(Primitive::INT, false));
                pars_t.push_back(llvm.TypeInt);
                break;
            case 'F':
                pars.push_back(LibraryFuncParameter(Primitive::FLOAT, false));
                pars_t.push_back(llvm.TypeFloat);
                break;
            case 'S':
                pars.push_back(LibraryFuncParameter(Primitive::STRING, false));
                pars_t.push_back(llvm.TypeString);
                break;
            default:
                assert(0);
        }
    }
    library.insert(std::make_pair(name, LibraryFunc{.func_name = func, .return_Type=ret, .parameters=pars}));
    llvm.Module->getOrInsertFunction(func, llvm::FunctionType::get(llvm.TypeConversion(ret), pars_t, false));
}

void Compiler::SetupLibrary() {

    // Core
    AddLibraryCall("SLEEP", "_sleep", Primitive::NONE, "F");

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
    AddLibraryCall("CIRCLE", "gfx2d_circle", Primitive::NONE, "IIF");
    AddLibraryCall("CIRCLEW", "gfx2d_circlew", Primitive::NONE, "IIFF");
    AddLibraryCall("CIRCLEFILL", "gfx2d_circlefilled", Primitive::NONE, "IIF");
    AddLibraryCall("LINE", "gfx2d_line", Primitive::NONE, "IIII");
    AddLibraryCall("LINEW", "gfx2d_linew", Primitive::NONE, "IIIIF");
    AddLibraryCall("FG", "gfx2d_fg", Primitive::NONE, "III");
    AddLibraryCall("BG", "gfx2d_bg", Primitive::NONE, "III");
    AddLibraryCall("COLOUR", "gfx2d_createcolour", Primitive::INT, "III");
    AddLibraryCall("CURSORON", "gfx2d_cursoron", Primitive::NONE, "");
    AddLibraryCall("CURSOROFF", "gfx2d_cursoroff", Primitive::NONE, "");

    // Sprites
    AddLibraryCall("LOADSPRITE", "sprites_load", Primitive::INT, "S");
    AddLibraryCall("DELETESPRITE", "sprites_delete", Primitive::NONE, "I");
    AddLibraryCall("GRABSPRITE", "sprites_create", Primitive::INT, "IIII");
    AddLibraryCall("DRAWSPRITE", "sprites_draw", Primitive::NONE, "IIIIFF");

    // 3D Graphics
    AddLibraryCall("OBJECT", "gfx3d_object", Primitive::INT, "IFFFFFFFI");
    AddLibraryCall("SHAPE", "gfx3d_shape", Primitive::INT, "");
    AddLibraryCall("SHAPEDELETE", "gfx3d_shapedelete", Primitive::NONE, "I");
    AddLibraryCall("CAMERA", "gfx3d_camera", Primitive::NONE, "FFFFFFFFF");
    AddLibraryCall("TRANSLATE", "gfx3d_translate", Primitive::NONE, "IFFF");
    AddLibraryCall("ROTATE", "gfx3d_rotate", Primitive::NONE, "IFFF");
    AddLibraryCall("SCALE", "gfx3d_scale", Primitive::NONE, "IF");
    AddLibraryCall("OBJECTDELETE", "gfx3d_deleteobject", Primitive::NONE, "I");
    AddLibraryCall("OBJDELALL", "gfx3d_deleteallobjects", Primitive::NONE, "I");
    AddLibraryCall("SHADOWSON", "gfx3d_shadowson", Primitive::NONE, "");
    AddLibraryCall("SHADOWSOFF", "gfx3d_shadowson", Primitive::NONE, "");
    AddLibraryCall("RENDER", "gfx3d_render", Primitive::NONE, "");
    AddLibraryCall("VERTEX", "gfx3d_vertex", Primitive::NONE, "FFFI");
    AddLibraryCall("FACESHADED", "gfx3d_face", Primitive::NONE, "III");
    AddLibraryCall("FACE", "gfx3d_facesolid", Primitive::NONE, "IIII");
    AddLibraryCall("LOADMESH", "gfx3d_loadmesh", Primitive::INT, "S");

    // Text
    AddLibraryCall("LOADFONT", "text_loadfont", Primitive::INT, "S");
    AddLibraryCall("SETFONT", "text_setfont", Primitive::NONE, "IF");
    AddLibraryCall("TEXT", "text_left", Primitive::NONE, "IIS");
    AddLibraryCall("TEXTRIGHT", "text_right", Primitive::NONE, "IIS");
    AddLibraryCall("TEXTCENTRE", "text_centre", Primitive::NONE, "IIS");

    // Random
    AddLibraryCall("RND", "rndi", Primitive::INT, "I");
    AddLibraryCall("RNDF", "rndf", Primitive::FLOAT, "F");

    // File I/O
    AddLibraryCall("OPENIN", "fileio_openin", Primitive::INT, "S");
    AddLibraryCall("OPENOUT", "fileio_openout", Primitive::INT, "S");
    AddLibraryCall("OPENUP", "fileio_openup", Primitive::INT, "S");
    AddLibraryCall("EOF", "fileio_eof", Primitive::INT, "I");
    AddLibraryCall("CLOSE", "fileio_close", Primitive::NONE, "I");
    AddLibraryCall("BGET", "fileio_bget", Primitive::BYTE, "I");
    AddLibraryCall("BPUT", "fileio_bput", Primitive::NONE, "IB");
    AddLibraryCall("SGET", "fileio_getsh", Primitive::STRING, "I");
    AddLibraryCall("TELL", "fileio_ptr", Primitive::INT, "I");
    AddLibraryCall("SEEK", "fileio_sptr", Primitive::NONE, "II");
    AddLibraryCall("DIR", "fileio_list_files", Primitive::INT, "S");
    AddLibraryCall("DIRENTRY", "fileio_get_filename", Primitive::STRING, "I");
    AddLibraryCall("DELETE", "fileio_delete", Primitive::NONE, "S");

    // Keyboard & Mouse
    AddLibraryCall("WAITKEY", "kbm_waitkey", Primitive::INT, "I");
    AddLibraryCall("WAITKEY$", "kbm_waitkeys", Primitive::STRING, "I");
    AddLibraryCall("KEYDOWN", "kbm_keydown", Primitive::INT, "I");
    AddLibraryCall("GET", "kbm_get", Primitive::INT, "I");
    AddLibraryCall("GET$", "kbm_gets", Primitive::STRING, "");
    AddLibraryCall("MOUSEX", "kbm_mousex", Primitive::INT, "");
    AddLibraryCall("MOUSEY", "kbm_mousey", Primitive::INT, "");
    AddLibraryCall("MOUSESTATE", "kbm_mousestate", Primitive::INT, "");

    // Software synth
    AddLibraryCall("LOADWAV", "audio_loadwav", Primitive::INT, "S");
    AddLibraryCall("PLAYWAV", "audio_play", Primitive::NONE, "I");
    AddLibraryCall("VOLUME", "audio_volume", Primitive::NONE, "IF");
    AddLibraryCall("SOUND", "audio_sound", Primitive::NONE, "IFF");
    AddLibraryCall("TONE", "audio_tone", Primitive::INT, "S");
    AddLibraryCall("ENVELOPE", "audio_envelope", Primitive::INT, "IFFFFFI");
}