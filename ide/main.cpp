#include <iostream>
#include <fstream>
#include <memory>
#include <thread>
#include <chrono>
#include <filesystem>
#include "UI/UISDL.h"
#include "IDE/Edit.h"
#include "../runtime/Config/Config.h"
#include "Exception/Exception.h"
#include "../runtime/Config/json.hpp"

extern "C" void audio_init();
using json = nlohmann::json;
UISDL* ui;
Config config;
std::atomic_bool run;
std::filesystem::path exe_path;
std::string cmd;
std::list<CaughtException> errors;

int main(int argc, char* argv[])
{
	exe_path = std::filesystem::absolute(std::filesystem::path(argv[0])).parent_path();
	std::cout << "Welcome to Daric!" << std::endl;
	std::cout << "Path: " << exe_path.generic_string() << std::endl;
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
		if (run.load())
		{
			std::cout << "Command: " << cmd << std::endl;
			ui->Minimise();
			system(cmd.c_str());
			ui->Restore();
			std::cout << "Execution complete" << std::endl;

			// Load errors (if any)
			errors.clear();
			std::ifstream file(exe_path / "Throwback.json");
			if (file.is_open())
			{
				json data = json::parse(file);
				for (json::iterator it = data.begin(); it != data.end(); ++it)
				{
					auto vv = it.value();
					CaughtException ce;
					auto type = vv["type"];
					ce.filename = vv["filename"];
					ce.line_number = vv["line_number"];
					ce.char_position = vv["char_position"];
					ce.error = vv["error"];
					errors.push_back(ce);
				}
			}
			run.store(false);
		}
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
