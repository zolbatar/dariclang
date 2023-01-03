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
extern UISDL *ui;
extern std::atomic_bool ui_started;
extern "C" void gfx_uicheck();

int Sprites::GrabSprite(int x, int y, int w, int h) {
    gfx_uicheck();
    ui->GetSpriteLock()->lock();
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
    ui->GetSpriteLock()->unlock();

    // Wait for all banks to be created and loaded
    auto ss = sprites.find(index);
    bool created = false;
    while (!created) {
        std::this_thread::sleep_for(std::chrono::microseconds(sprite_create_wait));
        ui->GetSpriteLock()->unlock();
        created = true;
        for (auto i = 0; i < banks; i++) {
            if (ss->second.banks[i].id == 0) {
                created = false;
            }
        }
        ui->GetSpriteLock()->unlock();
    }

    return static_cast<int>(index);
}

void Sprites::DeleteSprite(int handle) {
    ui->GetSpriteLock()->lock();
    auto sprite = sprites.find(handle);
    for (size_t i = 0; i < sprite->second.banks.size(); i++) {
        sprite->second.banks[i].state = SpriteState::_DELETE;
    }
    ui->GetSpriteLock()->unlock();
}

bool Sprites::DrawSprite(int handle, int bank, int sx, int sy, double rot, double scale) {
    ui->GetSpriteLock()->lock();
    auto sprite = sprites.find(handle);

    // Does sprite exist?
    if (sprite == sprites.end()) {
        ui->GetSpriteLock()->unlock();
        return false;
    }
    auto s = &sprite->second;

    // Does bank exist?
    if (static_cast<size_t>(bank) >= s->banks.size()) {
        ui->GetSpriteLock()->unlock();
        return false;
    }

    auto sb = &s->banks[bank];
    if (sb->state == SpriteState::OK) {
        ui->Sprite(sb, sx, sy, rot, scale, sb->flipped, 0, 0, 0, 0, render_point);
    }
    ui->GetSpriteLock()->unlock();
    return true;
}

bool Sprites::DrawPartSprite(int handle, int bank, int sx, int sy, double rot, double scale, int off_x, int off_y, int sz_x, int sz_y) {
    ui->GetSpriteLock()->lock();
    auto sprite = sprites.find(handle);

    // Does sprite exist?
    if (sprite == sprites.end()) {
        ui->GetSpriteLock()->unlock();
        return false;
    }
    auto s = &sprite->second;

    // Does bank exist?
    if (static_cast<size_t>(bank) >= s->banks.size()) {
        ui->GetSpriteLock()->unlock();
        return false;
    }

    auto sb = &s->banks[bank];
    if (sb->state == SpriteState::OK) {
        ui->Sprite(sb, sx, sy, rot, scale, sb->flipped, off_x, off_y, sz_x, sz_y, render_point);
    }
    ui->GetSpriteLock()->unlock();
    return true;
}

int Sprites::LoadSprite(std::string filename) {
    ui->GetSpriteLock()->lock();

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
    ui->GetSpriteLock()->unlock();

    // Now fetch back
    auto ss = sprites.find(index);

    // Wait for it to be created/loaded
    while (ss->second.banks[0].id == 0) {
        std::this_thread::sleep_for(std::chrono::microseconds(sprite_create_wait));
    }
    return static_cast<int>(index);
}

void Sprites::SetRenderPoint(int option) {
    this->render_point = option;
}


