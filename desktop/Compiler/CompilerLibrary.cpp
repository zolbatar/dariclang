#include "Compiler.h"

std::unordered_map<std::string, LibraryFunc> Compiler::library;

void Compiler::SetupLibraryLLVM() {
	std::vector<llvm::Type *> pars_t;
	for (auto &l : library) {
		for (auto &p : l.second.parameters) {
			switch (p.GetType()) {
			case Primitive::BYTE:
				pars_t.push_back(llvm.TypeByte);
				break;
			case Primitive::INT:
				pars_t.push_back(llvm.TypeInt);
				break;
			case Primitive::FLOAT:
				pars_t.push_back(llvm.TypeFloat);
				break;
			case Primitive::STRING:
				pars_t.push_back(llvm.TypeString);
				break;
			default:
				assert(0);
			}
		}
		llvm.Module->getOrInsertFunction(l.second.func_name,
										 llvm::FunctionType::get(llvm.TypeConversion(l.second.return_Type),
																 pars_t,
																 false));
	}
}

void Compiler::AddLibraryCall(std::string name, std::string func, Primitive ret, std::string parameters) {
	std::vector<LibraryFuncParameter> pars;
	for (auto c : parameters) {
		switch (c) {
		case 'B':
			pars.push_back(LibraryFuncParameter(Primitive::BYTE, false));
			break;
		case 'I':
			pars.push_back(LibraryFuncParameter(Primitive::INT, false));
			break;
		case 'F':
			pars.push_back(LibraryFuncParameter(Primitive::FLOAT, false));
			break;
		case 'S':
			pars.push_back(LibraryFuncParameter(Primitive::STRING, false));
			break;
		default:
			assert(0);
		}
	}
	library.insert(std::make_pair(name, LibraryFunc{.func_name = func, .return_Type=ret, .parameters=pars}));
}

std::vector<std::string> Compiler::GetAllLibraryCallNames() {
	std::vector<std::string> names;
	for (auto &l : library) {
		names.push_back(l.first);
	}
	return names;
}

void Compiler::SetupLibrary() {

	// Core
	AddLibraryCall("Sleep", "__sleep", Primitive::NONE, "F");

	// Chrono
	AddLibraryCall("Timer", "__time", Primitive::FLOAT, "");
	AddLibraryCall("Time", "times", Primitive::STRING, "");
	AddLibraryCall("Date", "dates", Primitive::STRING, "");

	// 2D Graphics
	AddLibraryCall("Mode", "gfx2d_mode", Primitive::NONE, "III");
	AddLibraryCall("BankedOn", "gfx2d_bankedon", Primitive::NONE, "");
	AddLibraryCall("BankedOff", "gfx2d_bankedoff", Primitive::NONE, "");
	AddLibraryCall("Origin", "gfx2d_origin", Primitive::NONE, "FF");
	AddLibraryCall("ScreenWidth", "gfx2d_swidth", Primitive::INT, "");
	AddLibraryCall("ScreenHeight", "gfx2d_sheight", Primitive::INT, "");
	AddLibraryCall("Flip", "gfx2d_flip", Primitive::NONE, "");
	AddLibraryCall("Cls", "gfx2d_cls", Primitive::NONE, "");
	AddLibraryCall("Plot", "gfx2d_plot", Primitive::NONE, "FF");
	AddLibraryCall("Rectangle", "gfx2d_rectangle", Primitive::NONE, "FFFF");
	AddLibraryCall("SetLineWidth", "gfx2d_linewidth", Primitive::NONE, "F");
	AddLibraryCall("RectangleFilled", "gfx2d_rectanglefill", Primitive::NONE, "FFFF");
	AddLibraryCall("Triangle", "gfx2d_triangle", Primitive::NONE, "FFFFFF");
	AddLibraryCall("TriangleFilled", "gfx2d_trianglefilled", Primitive::NONE, "FFFFFF");
	AddLibraryCall("TriangleShaded", "gfx2d_triangleshaded", Primitive::NONE, "FFIFFIFFI");
	AddLibraryCall("Circle", "gfx2d_circle", Primitive::NONE, "FFF");
	AddLibraryCall("CircleFilled", "gfx2d_circlefilled", Primitive::NONE, "FFF");
	AddLibraryCall("ClipOn", "gfx2d_clipon", Primitive::NONE, "FFFF");
	AddLibraryCall("ClipOff", "gfx2d_clipoff", Primitive::NONE, "");
	AddLibraryCall("Line", "gfx2d_line", Primitive::NONE, "FFFF");
	AddLibraryCall("SetFG", "gfx2d_fg", Primitive::NONE, "III");
	AddLibraryCall("SetAlpha", "gfx2d_set_alpha", Primitive::NONE, "I");
	AddLibraryCall("SetBG", "gfx2d_bg", Primitive::NONE, "III");
	AddLibraryCall("Colour", "gfx2d_createcolour", Primitive::INT, "III");
	AddLibraryCall("CursorOn", "gfx2d_cursoron", Primitive::NONE, "");
	AddLibraryCall("CursorOff", "gfx2d_cursoroff", Primitive::NONE, "");

	// Sprites
	AddLibraryCall("LoadSprite", "sprites_load", Primitive::INT, "S");
	AddLibraryCall("DeleteSprite", "sprites_delete", Primitive::NONE, "I");
	AddLibraryCall("GrabSprite", "sprites_create", Primitive::INT, "IIII");
	AddLibraryCall("DrawSprite", "sprites_draw", Primitive::NONE, "IIFFFF");

	// 3D Graphics
	AddLibraryCall("Object", "gfx3d_object", Primitive::INT, "IFFFFFFFI");
	AddLibraryCall("Shape", "gfx3d_shape", Primitive::INT, "");
	AddLibraryCall("DeleteShape", "gfx3d_shapedelete", Primitive::NONE, "I");
	AddLibraryCall("SetCamera", "gfx3d_camera", Primitive::NONE, "FFFFFFFFF");
	AddLibraryCall("Translate", "gfx3d_translate", Primitive::NONE, "IFFF");
	AddLibraryCall("Rotate", "gfx3d_rotate", Primitive::NONE, "IFFF");
	AddLibraryCall("Scale", "gfx3d_scale", Primitive::NONE, "IF");
	AddLibraryCall("DeleteObject", "gfx3d_deleteobject", Primitive::NONE, "I");
	AddLibraryCall("DeleteAllObjects", "gfx3d_deleteallobjects", Primitive::NONE, "");
	AddLibraryCall("ShadowsOn", "gfx3d_shadowson", Primitive::NONE, "");
	AddLibraryCall("ShadowsOff", "gfx3d_shadowsoff", Primitive::NONE, "");
	AddLibraryCall("Render", "gfx3d_render", Primitive::NONE, "");
	AddLibraryCall("Vertex", "gfx3d_vertex", Primitive::NONE, "FFF");
	AddLibraryCall("VertexColour", "gfx3d_vertexc", Primitive::NONE, "FFFI");
	AddLibraryCall("FaceColour", "gfx3d_facec", Primitive::NONE, "IIII");
	AddLibraryCall("Face", "gfx3d_face", Primitive::NONE, "III");
	AddLibraryCall("LoadMesh", "gfx3d_loadmesh", Primitive::INT, "S");
	AddLibraryCall("SetAmbient", "gfx3d_ambient", Primitive::NONE, "FFF");
	AddLibraryCall("SetDirectional", "gfx3d_directional", Primitive::NONE, "FFFFFFFFF");
	AddLibraryCall("SetRotate", "gfx3d_setrotate", Primitive::NONE, "FFFFFF");
	AddLibraryCall("GetRotateX", "gfx3d_getrotatex", Primitive::FLOAT, "");
	AddLibraryCall("GetRotateY", "gfx3d_getrotatey", Primitive::FLOAT, "");
	AddLibraryCall("GetRotateZ", "gfx3d_getrotatez", Primitive::FLOAT, "");

	// Text
	AddLibraryCall("LoadFont", "text_loadfont", Primitive::INT, "SF");
	AddLibraryCall("SetFont", "text_setfont", Primitive::NONE, "I");
	AddLibraryCall("Text", "text_left", Primitive::NONE, "IIS");
	AddLibraryCall("TextRight", "text_right", Primitive::NONE, "IIS");
	AddLibraryCall("TextCentre", "text_centre", Primitive::NONE, "IIS");

	// Random
	AddLibraryCall("Rnd", "rndi", Primitive::INT, "I");
	AddLibraryCall("RndF", "rndf", Primitive::FLOAT, "F");

	// File I/O
	AddLibraryCall("OpenIn", "fileio_openin", Primitive::INT, "S");
	AddLibraryCall("OpenOut", "fileio_openout", Primitive::INT, "S");
	AddLibraryCall("OpenUp", "fileio_openup", Primitive::INT, "S");
	AddLibraryCall("Eof", "fileio_eof", Primitive::INT, "I");
	AddLibraryCall("Close", "fileio_close", Primitive::NONE, "I");
	AddLibraryCall("BGet", "fileio_bget", Primitive::BYTE, "I");
	AddLibraryCall("BPut", "fileio_bput", Primitive::NONE, "IB");
	AddLibraryCall("SGet", "fileio_getsh", Primitive::STRING, "I");
	AddLibraryCall("Tell", "fileio_ptr", Primitive::INT, "I");
	AddLibraryCall("Seek", "fileio_sptr", Primitive::NONE, "II");
	AddLibraryCall("Dir", "fileio_list_files", Primitive::INT, "S");
	AddLibraryCall("DirEntry", "fileio_get_filename", Primitive::STRING, "I");
	AddLibraryCall("Delete", "fileio_delete", Primitive::NONE, "S");

	// Keyboard & Mouse
	AddLibraryCall("ClearEvents", "kbm_clear", Primitive::NONE, "");
	AddLibraryCall("WaitKey", "kbm_waitkey", Primitive::INT, "I");
	AddLibraryCall("WaitKeyChar", "kbm_waitkeys", Primitive::STRING, "I");
	AddLibraryCall("KeyDown", "kbm_keydown", Primitive::INT, "I");
	AddLibraryCall("Get", "kbm_get", Primitive::INT, "");
	AddLibraryCall("GetChar", "kbm_gets", Primitive::STRING, "");
	AddLibraryCall("MouseX", "kbm_mousex", Primitive::INT, "");
	AddLibraryCall("MouseY", "kbm_mousey", Primitive::INT, "");
	AddLibraryCall("MouseState", "kbm_mousestate", Primitive::INT, "");

	// Software synth
	AddLibraryCall("LoadWAV", "audio_loadwav", Primitive::INT, "S");
	AddLibraryCall("PlayWAV", "audio_play", Primitive::NONE, "II");
	AddLibraryCall("SetVolume", "audio_volume", Primitive::NONE, "IF");
	AddLibraryCall("Sound", "audio_sound", Primitive::NONE, "IFF");
	AddLibraryCall("Tone", "audio_tone", Primitive::INT, "S");
	AddLibraryCall("Envelope", "audio_envelope", Primitive::INT, "IFFFFFI");
}
