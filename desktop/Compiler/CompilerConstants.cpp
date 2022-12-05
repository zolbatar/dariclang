#include "Compiler.h"
#include "../../runtime/UI/UISDL.h"

void Compiler::CreateConstant(const std::string &name, Primitive type, llvm::Constant *val) {
    InstanceConstant::Build(name, type, Scope::GLOBAL, llvm, GetIR());
    llvm.CreateConstant(name, type, val);
}

void Compiler::Constants() {
    CreateConstant("Windowed", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 1));
    CreateConstant("Banked", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 2));

    CreateConstant("KEY_ESCAPE", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_ESCAPE));
    CreateConstant("KEY_RETURN", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_RETURN));

    // Constants
    CreateConstant("KEY_1", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_1));
    CreateConstant("KEY_2", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_2));
    CreateConstant("KEY_3", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_3));
    CreateConstant("KEY_4", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_4));
    CreateConstant("KEY_5", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_5));
    CreateConstant("KEY_6", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_6));
    CreateConstant("KEY_7", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_7));
    CreateConstant("KEY_8", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_8));
    CreateConstant("KEY_9", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_9));
    CreateConstant("KEY_0", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_0));

    CreateConstant("KEY_Q", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_Q));
    CreateConstant("KEY_W", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_W));
    CreateConstant("KEY_E", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_E));
    CreateConstant("KEY_R", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_R));
    CreateConstant("KEY_T", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_T));
    CreateConstant("KEY_Y", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_Y));
    CreateConstant("KEY_U", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_U));
    CreateConstant("KEY_I", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_I));
    CreateConstant("KEY_O", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_O));
    CreateConstant("KEY_P", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_P));

    CreateConstant("KEY_A", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_A));
    CreateConstant("KEY_S", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_S));
    CreateConstant("KEY_D", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_D));
    CreateConstant("KEY_F", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_F));
    CreateConstant("KEY_G", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_G));
    CreateConstant("KEY_H", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_H));
    CreateConstant("KEY_J", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_J));
    CreateConstant("KEY_K", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_K));
    CreateConstant("KEY_L", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_L));

    CreateConstant("KEY_Z", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_Z));
    CreateConstant("KEY_X", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_X));
    CreateConstant("KEY_C", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_C));
    CreateConstant("KEY_V", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_V));
    CreateConstant("KEY_B", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_B));
    CreateConstant("KEY_N", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_N));
    CreateConstant("KEY_M", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, SDL_SCANCODE_M));

    CreateConstant("CHANNEL_SINE", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 0));
    CreateConstant("CHANNEL_SQUARE", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 1));
    CreateConstant("CHANNEL_TRIANGLE", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 2));
    CreateConstant("CHANNEL_SAWTOOTH", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 3));
    CreateConstant("CHANNEL_NOISE", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 4));
    CreateConstant("CHANNEL_PULSE5", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 5));
    CreateConstant("CHANNEL_PULSE10", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 6));
    CreateConstant("CHANNEL_PULSE15", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 7));
    CreateConstant("CHANNEL_PULSE20", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 8));
    CreateConstant("CHANNEL_PULSE25", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 9));
    CreateConstant("CHANNEL_PULSE50", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 10));
    CreateConstant("CHANNEL_PULSE75", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 11));
    CreateConstant("CHANNEL_PIANO", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 64));
    CreateConstant("CHANNEL_BASS", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 65));
    CreateConstant("CHANNEL_BRASS", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 66));
    CreateConstant("CHANNEL_CYMBAL", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 67));
    CreateConstant("CHANNEL_GLOCKENSPIEL", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 68));
    CreateConstant("CHANNEL_GUITAR", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 69));
    CreateConstant("CHANNEL_ORGAN", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 70));
    CreateConstant("CHANNEL_REED", Primitive::INT, llvm.CreateConstantInt(Primitive::INT, 71));
    CreateConstant("NOTE_C0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 16.35));
    CreateConstant("NOTE_Cs0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 17.32));
    CreateConstant("NOTE_Db0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 17.32));
    CreateConstant("NOTE_D0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 18.35));
    CreateConstant("NOTE_DS0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 19.45));
    CreateConstant("NOTE_Eb0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 19.45));
    CreateConstant("NOTE_E0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 20.60));
    CreateConstant("NOTE_F0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 21.83));
    CreateConstant("NOTE_Fs0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 23.12));
    CreateConstant("NOTE_Gb0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 23.12));
    CreateConstant("NOTE_G0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 24.50));
    CreateConstant("NOTE_Gs0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 25.96));
    CreateConstant("NOTE_Ab0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 25.96));
    CreateConstant("NOTE_A0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 27.50));
    CreateConstant("NOTE_As0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 29.14));
    CreateConstant("NOTE_Bb0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 29.14));
    CreateConstant("NOTE_B0", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 30.87));
    CreateConstant("NOTE_C1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 32.70));
    CreateConstant("NOTE_Cs1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 34.65));
    CreateConstant("NOTE_Db1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 34.65));
    CreateConstant("NOTE_D1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 36.71));
    CreateConstant("NOTE_Ds1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 38.89));
    CreateConstant("NOTE_Eb1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 38.89));
    CreateConstant("NOTE_E1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 41.20));
    CreateConstant("NOTE_F1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 43.65));
    CreateConstant("NOTE_Fs1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 46.25));
    CreateConstant("NOTE_Gb1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 46.25));
    CreateConstant("NOTE_G1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 49.00));
    CreateConstant("NOTE_Gs1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 51.91));
    CreateConstant("NOTE_Ab1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 51.91));
    CreateConstant("NOTE_A1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 55.00));
    CreateConstant("NOTE_As1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 58.27));
    CreateConstant("NOTE_Bb1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 58.27));
    CreateConstant("NOTE_B1", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 61.74));
    CreateConstant("NOTE_C2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 65.41));
    CreateConstant("NOTE_Cs2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 69.30));
    CreateConstant("NOTE_Db2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 69.30));
    CreateConstant("NOTE_D2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 73.42));
    CreateConstant("NOTE_Ds2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 77.78));
    CreateConstant("NOTE_Eb2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 77.78));
    CreateConstant("NOTE_E2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 82.41));
    CreateConstant("NOTE_F2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 87.31));
    CreateConstant("NOTE_Fs2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 92.50));
    CreateConstant("NOTE_Gb2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 92.50));
    CreateConstant("NOTE_G2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 98.00));
    CreateConstant("NOTE_Gs2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 103.83));
    CreateConstant("NOTE_Ab2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 103.83));
    CreateConstant("NOTE_A2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 110.00));
    CreateConstant("NOTE_As2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 116.54));
    CreateConstant("NOTE_Bb2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 116.54));
    CreateConstant("NOTE_B2", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 123.47));
    CreateConstant("NOTE_C3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 130.81));
    CreateConstant("NOTE_Cs3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 138.59));
    CreateConstant("NOTE_Db3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 138.59));
    CreateConstant("NOTE_D3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 146.83));
    CreateConstant("NOTE_Ds3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 155.56));
    CreateConstant("NOTE_Eb3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 155.56));
    CreateConstant("NOTE_E3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 164.81));
    CreateConstant("NOTE_F3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 174.61));
    CreateConstant("NOTE_Fs3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 185.00));
    CreateConstant("NOTE_Gb3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 185.00));
    CreateConstant("NOTE_G3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 196.00));
    CreateConstant("NOTE_Gs3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 207.65));
    CreateConstant("NOTE_Ab3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 207.65));
    CreateConstant("NOTE_A3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 220.00));
    CreateConstant("NOTE_As3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 233.08));
    CreateConstant("NOTE_Bb3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 233.08));
    CreateConstant("NOTE_B3", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 246.94));
    CreateConstant("NOTE_C4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 261.63));
    CreateConstant("NOTE_Cs4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 277.18));
    CreateConstant("NOTE_Db4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 277.18));
    CreateConstant("NOTE_D4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 293.66));
    CreateConstant("NOTE_Ds4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 311.13));
    CreateConstant("NOTE_Eb4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 311.13));
    CreateConstant("NOTE_E4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 329.63));
    CreateConstant("NOTE_F4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 349.23));
    CreateConstant("NOTE_Fs4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 369.99));
    CreateConstant("NOTE_Gb4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 369.99));
    CreateConstant("NOTE_G4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 392.00));
    CreateConstant("NOTE_Gs4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 415.30));
    CreateConstant("NOTE_Ab4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 415.30));
    CreateConstant("NOTE_A4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 440.00));
    CreateConstant("NOTE_As4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 466.16));
    CreateConstant("NOTE_Bb4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 466.16));
    CreateConstant("NOTE_B4", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 493.88));
    CreateConstant("NOTE_C5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 523.25));
    CreateConstant("NOTE_Cs5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 554.37));
    CreateConstant("NOTE_Db5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 554.37));
    CreateConstant("NOTE_D5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 587.33));
    CreateConstant("NOTE_Ds5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 622.25));
    CreateConstant("NOTE_Eb5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 622.25));
    CreateConstant("NOTE_E5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 659.25));
    CreateConstant("NOTE_Fs5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 739.99));
    CreateConstant("NOTE_Gb5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 739.99));
    CreateConstant("NOTE_G5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 783.99));
    CreateConstant("NOTE_Gs5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 830.61));
    CreateConstant("NOTE_Ab5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 830.61));
    CreateConstant("NOTE_A5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 880.00));
    CreateConstant("NOTE_As5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 932.33));
    CreateConstant("NOTE_Bb5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 932.33));
    CreateConstant("NOTE_B5", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 987.77));
    CreateConstant("NOTE_C6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1046.50));
    CreateConstant("NOTE_Cs6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1108.73));
    CreateConstant("NOTE_Db6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1108.73));
    CreateConstant("NOTE_D6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1174.66));
    CreateConstant("NOTE_Ds6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1244.51));
    CreateConstant("NOTE_Eb6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1244.51));
    CreateConstant("NOTE_E6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1318.51));
    CreateConstant("NOTE_F6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1396.91));
    CreateConstant("NOTE_Fs6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1479.98));
    CreateConstant("NOTE_Gb6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1479.98));
    CreateConstant("NOTE_G6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1567.98));
    CreateConstant("NOTE_Gs6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1661.22));
    CreateConstant("NOTE_Ab6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1661.22));
    CreateConstant("NOTE_A6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1760.00));
    CreateConstant("NOTE_As6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1864.66));
    CreateConstant("NOTE_Bb6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1864.66));
    CreateConstant("NOTE_B6", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 1975.53));
    CreateConstant("NOTE_C7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 2093.00));
    CreateConstant("NOTE_Cs7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 2217.46));
    CreateConstant("NOTE_Db7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 2217.46));
    CreateConstant("NOTE_D7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 2349.32));
    CreateConstant("NOTE_Ds7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 2489.02));
    CreateConstant("NOTE_Eb7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 2489.02));
    CreateConstant("NOTE_E7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 2637.02));
    CreateConstant("NOTE_F7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 2793.83));
    CreateConstant("NOTE_Fs7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 2959.96));
    CreateConstant("NOTE_Gb7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 2959.96));
    CreateConstant("NOTE_G7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 3135.96));
    CreateConstant("NOTE_Gs7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 3322.44));
    CreateConstant("NOTE_Ab7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 3322.44));
    CreateConstant("NOTE_A7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 3520.00));
    CreateConstant("NOTE_As7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 3729.31));
    CreateConstant("NOTE_Bb7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 3729.31));
    CreateConstant("NOTE_B7", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 3951.07));
    CreateConstant("NOTE_C8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 4186.01));
    CreateConstant("NOTE_Cs8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 4434.92));
    CreateConstant("NOTE_Db8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 4434.92));
    CreateConstant("NOTE_D8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 4698.63));
    CreateConstant("NOTE_Ds8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 4978.03));
    CreateConstant("NOTE_Eb8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 4978.03));
    CreateConstant("NOTE_E8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 5274.04));
    CreateConstant("NOTE_F8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 5587.65));
    CreateConstant("NOTE_Fs8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 5919.91));
    CreateConstant("NOTE_Gb8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 5919.91));
    CreateConstant("NOTE_G8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 6271.93));
    CreateConstant("NOTE_Gs8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 6644.88));
    CreateConstant("NOTE_Ab8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 6644.88));
    CreateConstant("NOTE_A8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 7040.00));
    CreateConstant("NOTE_As8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 7458.62));
    CreateConstant("NOTE_Bb8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 7458.62));
    CreateConstant("NOTE_B8", Primitive::FLOAT, llvm.CreateConstantFloat(Primitive::FLOAT, 7902.13));
}