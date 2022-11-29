#include "Sprite.h"

#include <iostream>
#include <mutex>
#include <thread>
#include <memory>
#include <chrono>
#include "Sprite.h"
#include "UISDL.h"

Sprites sprite;
size_t sprite_index = 0;
extern std::mutex sprite_lock;
const int sprite_create_wait = 10;
extern UISDL *ui;

int Sprites::GrabSprite(int x, int y, int w, int h) {
    sprite_lock.lock();
    Sprite s;
    int banks = 1;
    for (auto i = 0; i < banks; i++) {
        SpriteBank sb;
        sb.id = 0;
        sb.width = w;
        sb.x = x;
        sb.y = y;
        sb.height = h;
        sb.flipped = true;
        sb.state = SpriteState::GRAB;
        s.banks.push_back(std::move(sb));
    }
    size_t index = sprite_index++;
    sprites.insert(std::make_pair(index, std::move(s)));
    sprite_lock.unlock();

    // Wait for all banks to be created and loaded
    auto ss = sprites.find(index);
    bool created = false;
    while (!created) {
        std::this_thread::sleep_for(std::chrono::microseconds(sprite_create_wait));
        sprite_lock.lock();
        created = true;
        for (auto i = 0; i < banks; i++) {
            if (ss->second.banks[i].id == 0) {
                created = false;
            }
        }
        sprite_lock.unlock();
    }

    return static_cast<int>(index);
}

void Sprites::DeleteSprite(int handle) {
    sprite_lock.lock();
    auto sprite = sprites.find(handle);
    for (auto i = 0; i < sprite->second.banks.size(); i++) {
        sprite->second.banks[i].state = SpriteState::_DELETE;
    }
    sprite_lock.unlock();
}

bool Sprites::DrawSprite(int handle, int bank, double sx, double sy, double rot, double scale) {
    sprite_lock.lock();
    auto sprite = sprites.find(handle);

    // Does sprite exist?
    if (sprite == sprites.end()) {
        sprite_lock.unlock();
        return false;
    }
    auto s = &sprite->second;

    // Does bank exist?
    if (bank >= s->banks.size()) {
        sprite_lock.unlock();
        return false;
    }

    auto sb = &s->banks[bank];
    if (sb->state == SpriteState::OK) {
        ui->Sprite(sb, sx, sy, rot, scale, sb->flipped);
    }
    sprite_lock.unlock();
    return true;
}

int Sprites::LoadSprite(std::string filename) {
    sprite_lock.lock();

    // Create sprite
    Sprite s;

    // Create bank
    SpriteBank sb;
    sb.filename = filename;
    sb.state = SpriteState::LOAD;
    sb.id = 0;
    s.banks.push_back(std::move(sb));

    // And save and return
    auto index = sprite_index++;
    sprites.insert(std::make_pair(index, std::move(s)));
    sprite_lock.unlock();

    // Now fetch back
    auto ss = sprites.find(index);

    // Wait for it to be created/loaded
    while (ss->second.banks[0].id == 0) {
        std::this_thread::sleep_for(std::chrono::microseconds(sprite_create_wait));
    }

    return static_cast<int>(index);
}
