#pragma once

#include <list>
#include <string>
#include "TextEditor.h"

class Edit {
public:
	Edit();
	void SetFont(ImFont *_fontUIFixed);
	void Render(const ImGuiViewport *main_viewport);
	bool LoadFile(std::string filename);
	void ChooseFile();
	void SaveFile();

	std::vector<std::string> GetTextLines() {
		return editors[fileBeingEdited].GetTextLines();
	}

	std::string GetFilename() {
		return fileBeingEdited;
	}

private:
	bool open;

	ImFont *fontUIFixed;
	std::string fileBeingEdited = "";
	std::list<std::string> files;
	std::map<std::string, TextEditor> editors;
};