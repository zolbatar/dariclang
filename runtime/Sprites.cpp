#include "Types.h"
#include "UI/Sprite.h"

extern std::atomic_bool ui_started;
extern "C" void gfx_uicheck();
extern Sprites sprite;

extern "C" DLLEXTERN T_I sprites_load(T_S filename) {
    gfx_uicheck();
    return sprite.LoadSprite(filename);
}

extern "C" DLLEXTERN void sprites_delete(T_I handle) {
    gfx_uicheck();
    sprite.DeleteSprite(handle);
}

extern "C" DLLEXTERN T_I sprites_create(T_I x, T_I y, T_I w, T_I h) {
    gfx_uicheck();
    return sprite.GrabSprite(x, y, w, h);
}

extern "C" DLLEXTERN void sprites_draw(T_I handle, T_I bank, T_F x, T_F y, T_F rot, T_F scale) {
    gfx_uicheck();
    sprite.DrawSprite(handle, bank, x, y, rot, scale);
}

extern "C" DLLEXTERN void sprites_partdraw(T_I handle, T_I bank, T_F x, T_F y, T_F rot, T_F scale, T_I off_x, T_I off_y, T_I sz_x, T_I sz_y) {
    gfx_uicheck();
    sprite.DrawPartSprite(handle, bank, x, y, rot, scale, off_x, off_y, sz_x, sz_y);
}

extern "C" DLLEXTERN void sprites_renderpoint(T_I option) {
    gfx_uicheck();
    sprite.SetRenderPoint(option);
}

extern "C" DLLEXTERN void sprites_usecolour(T_I option) {
    gfx_uicheck();
    sprite.SetUseColour(option == 1);
}
