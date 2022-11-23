#include "Types.h"
#include "UI/Sprite.h"

extern std::atomic_bool ui_started;

extern Sprites sprite;

extern "C" T_I sprites_load(T_S filename) {
    if (!ui_started)
        return 0;
    return sprite.LoadSprite(filename);
}

extern "C" void sprites_delete(T_I handle) {
    if (!ui_started)
        return;
    sprite.DeleteSprite(handle);
}

extern "C" T_I sprites_create(T_I x, T_I y, T_I w, T_I h) {
    if (!ui_started)
        return 0;
    return sprite.GrabSprite(x, y, w, h);
}

extern "C" void sprites_draw(T_I handle, T_I bank, T_I x, T_I y, T_F rot, T_F scale) {
    if (!ui_started)
        return;
    sprite.DrawSprite(handle, bank, x, y, rot, scale);
}
