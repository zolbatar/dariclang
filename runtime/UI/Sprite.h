#pragma once

#include <memory>
#include <string>
#include <vector>
#include <unordered_map>

typedef uint32_t GLuint;

enum class SpriteState {
    OK,
    LOAD,
    _DELETE,
    GRAB,
    DEAD
};

struct SpriteBank {
    SpriteState state;
    std::string filename;
    int width, height;
    int x, y;
    GLuint id;
    bool flipped = false;
};

struct Sprite {
    std::vector<SpriteBank> banks;
};

class Sprites {
public:
    void DeleteSprite(int handle);
    bool DrawSprite(int handle, int bank, double x, double y, double rot, double scale);
    int LoadSprite(std::string filename);

    Sprite *GetSprite(size_t index) {
        return &sprites[index];
    }

    int GrabSprite(int x, int y, int w, int h);

    size_t bank_width, bank_height;
    size_t bank_x1, bank_y1, bank_x2, bank_y2;
private:
    std::unordered_map<size_t, Sprite> sprites;
};
