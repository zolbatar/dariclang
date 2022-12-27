#include <iostream>
#include <fstream>
#include <memory>
#include <thread>
#include <chrono>
#include <filesystem>
#include "UI/UISDL.h"
#include "IDE/Edit.h"
#include "../runtime/Config/Config.h"

extern "C" void audio_init();
UISDL* ui;
Config config;
std::filesystem::path exe_path;
//extern Input input;
//extern std::list<CaughtException> errors;

int main(int argc, char* argv[])
{
	exe_path = std::filesystem::path{ argv[0] }.parent_path();
	std::cout << "Welcome to Daric!" << std::endl;
	config.Load();
	ui = new UISDL();

	// Fire up IDE
	if (config.Windowed())
	{
		ui->Start(config.WindowWidth(), config.WindowHeight(), true, false);
	}
	else
	{
		ui->Start(ui->GetScreenWidth(), ui->GetScreenHeight(), false, false);
	}
	std::cout << "UI Started" << std::endl;

	Edit edit;
	while (true)
	{
		if (ui->Render([&]()
		{
			const ImGuiViewport* main_viewport = ImGui::GetMainViewport();
			edit.Render(main_viewport);
			edit.ChooseFile(main_viewport);
			edit.ChooseFileToSave(main_viewport);
		}))
		{
			delete ui;
			exit(0);
		}
	}
	return 0;
}
