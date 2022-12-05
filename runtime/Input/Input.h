#pragma once

#include <array>
#include <queue>
#include <mutex>
#include <functional>
#include <optional>
#include "SDL.h"

enum class EventType
{
    KeyDown,
    KeyUp
};

struct Event
{
    EventType type;
    SDL_Scancode code;
    char ascii;
    uint16_t mod;
};

class Input
{
public:
    void ProcessEvent(SDL_Event &event);
    void CheckForKeypress();
    char Get();
	void Clear();
    std::string GetString();
	int CheckKey(int keycode);
    int Waitkey(int timeout);
    std::string Waitkeys(int timeout);
    std::string InputLine();
    void Mouse(int *x, int *y, int *state);

    void ClearEscapePressed() { escape_pressed = false; }
    bool IsEscapePressed() { return escape_pressed; }

private:
    std::queue<char> buffer;
    std::mutex lock;
    std::array<bool, 256> key_pressed;
    std::queue<Event> key_events;
    bool escape_pressed = false;
};
