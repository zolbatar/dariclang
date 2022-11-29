#include <iostream>
#include <thread>
#include "Input.h"

Input input;
extern int get_clock();

char Input::Get()
{
    while (buffer.empty()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    auto t = buffer.front();
    buffer.pop();
    return t;
}

std::string Input::GetString()
{
    while (buffer.empty()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    auto t = buffer.front();
    buffer.pop();
    return std::string(1, t);
}

std::string Input::InputLine()
{
    std::string out;
    while (true) {
        while (buffer.empty()) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        auto t = buffer.front();
        buffer.pop();
        if (t == 13) {
            return out;
        }
        out += std::string(t, 1);
    }
}

void Input::ProcessEvent(SDL_Event &event)
{
    switch (event.type) {
        case SDL_KEYDOWN: {
            auto sym = event.key.keysym;
            Event e;
            e.type = EventType::KeyDown;
            e.code = sym.scancode;
            e.ascii = sym.sym;
            e.mod = sym.mod;
            lock.lock();
            key_events.push(std::move(e));
            lock.unlock();
            key_pressed[e.code] = true;
            if (e.code == SDL_SCANCODE_ESCAPE) {
                escape_pressed = true;
            }
            break;
        }
        case SDL_KEYUP: {
            auto sym = event.key.keysym;
            Event e;
            e.type = EventType::KeyUp;
            e.code = sym.scancode;
            e.ascii = sym.sym;
            e.mod = sym.mod;
            lock.lock();
            key_events.push(std::move(e));
            lock.unlock();
            key_pressed[e.code] = false;

            if (sym.sym >= 32 && sym.sym < 127) {
                buffer.push(sym.sym);
            }
            break;
        }
        default:
            // std::cout << event.type << std::endl;
            break;
    }
}

void Input::CheckForKeypress()
{
    // Wait for key in buffer
    while (buffer.empty()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    buffer.pop();
}

int Input::Inkey(int timeout_or_keycode)
{
    if (timeout_or_keycode <= -1) {
        return key_pressed[static_cast<size_t>(-timeout_or_keycode) - 1];
    } else {
        int clock = get_clock();
        do {
            // Scan
            lock.lock();
            while (!key_events.empty()) { // Scan until we find a keydown
                auto s = key_events.front();
                key_events.pop();
                if (s.type == EventType::KeyDown) {
                    lock.unlock();
                    return s.ascii;
                }
            }
            lock.unlock();
        } while (get_clock() - clock < timeout_or_keycode);
        return -1;
    }
}

std::string Input::Inkeys(int timeout_or_keycode)
{
    auto c = Inkey(timeout_or_keycode);
    if (c == -1)
        return std::string("");
    return std::string(1, static_cast<char>(c));
}

void Input::Mouse(int *x, int *y, int *state)
{
    int xl, yl;
    auto statel = SDL_GetMouseState(&xl, &yl);
    *x = xl;
    *y = yl;
    *state = 0;
    if (statel & SDL_BUTTON(SDL_BUTTON_LEFT))
        *state |= 4;
    if (statel & SDL_BUTTON(SDL_BUTTON_MIDDLE))
        *state |= 2;
    if (statel & SDL_BUTTON(SDL_BUTTON_RIGHT))
        *state |= 1;
}