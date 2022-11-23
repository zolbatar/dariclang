#include "Types.h"
#include "UI/Sprite.h"

extern Sprites sprite;

extern "C" T_I sprites_load(T_S filename) {
    return sprite.LoadSprite(filename);
}

extern "C" void sprites_delete(T_I handle) {
    sprite.DeleteSprite(handle);
}

extern "C" T_I sprites_create(T_I x, T_I y, T_I w, T_I h) {
    return sprite.GrabSprite(x, y, w, h);
}

extern "C" void sprites_draw(T_I handle, T_I bank, T_I x, T_I y, T_F rot, T_F scale) {
    sprite.DrawSprite(handle, bank, x, y, rot, scale);
}
