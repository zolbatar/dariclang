#pragma once

#include <list>
#include <string>
#include "TextEditor.h"

class Edit {
public:
	Edit();
	void Render(const ImGuiViewport *main_viewport);
	bool LoadFile(std::string filename);
	void ChooseFile();
	void SaveFile();

	std::vector<std::string> GetTextLines() {
		return editors.find(fileBeingEdited)->second.GetTextLines();
	}

	std::string GetFilename() {
		return fileBeingEdited;
	}

private:
	bool open;

	ImFont *fontUIFixed;
	ImFont *fontUIFixedBold;
	std::string fileBeingEdited = "";
	std::list<std::string> files;
	std::map<std::string, TextEditor> editors;
};