#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <map>
#include "Edit.h"
//#include "../LogWindow/LogWindow.h"
#include "ImGuiFileDialog/ImGuiFileDialog.h"
#include "../../runtime/UI/UISDL.h"

//std::list<DARICException> errors;
//std::tuple<File*, uint32_t> findFileForLine(uint32_t line_number);
extern std::filesystem::path exe_path;
extern UISDL *ui;

Edit::Edit() {
	ImGuiIO &io = ImGui::GetIO();
	if (std::filesystem::exists("BerkeleyMono-Regular.ttf")) {
		fontUIFixed = io.Fonts->AddFontFromFileTTF((exe_path / "BerkeleyMono-Regular.ttf").generic_string().c_str(),
												   20.0 * ui->GetDPIRatio());
		fontUIFixedBold = io.Fonts->AddFontFromFileTTF((exe_path / "BerkeleyMono-Bold.ttf").generic_string().c_str(),
													   20.0 * ui->GetDPIRatio());
	} else {
		fontUIFixed = io.Fonts->AddFontFromFileTTF((exe_path / "RobotoMono-Regular.ttf").generic_string().c_str(),
												   20.0 * ui->GetDPIRatio());
		fontUIFixedBold = io.Fonts->AddFontFromFileTTF((exe_path / "RobotoMono-Regular.ttf").generic_string().c_str(),
													   20.0 * ui->GetDPIRatio());
	}
}

void Edit::ChooseFile() {
	if (ImGuiFileDialog::Instance()->Display("ChooseFileDlgKey")) {

		// action if OK
		if (ImGuiFileDialog::Instance()->IsOk()) {
			std::string filePathName = ImGuiFileDialog::Instance()->GetFilePathName();
			std::string filePath = ImGuiFileDialog::Instance()->GetCurrentPath();
			Edit::LoadFile(filePathName);
		}

		// close
		ImGuiFileDialog::Instance()->Close();
	}
}

bool Edit::LoadFile(std::string filename) {
	fileBeingEdited = filename;
	std::ifstream t(filename);
	if (t.good()) {
		std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
		TextEditor editor(fontUIFixed, fontUIFixedBold);
		editor.SetText(str);
		editor.SetLanguageDefinition(TextEditor::LanguageDefinition::DARIC());
		editors.insert(std::make_pair(filename, std::move(editor)));
		files.push_back(filename);
		return true;
	}

	// File does not exist
//	log_window.WriteString("\nFile doesn't exist\n");
	return false;
}

void Edit::SaveFile() {
	std::ofstream t(fileBeingEdited);
	if (t.good()) {
		auto ss = editors.find(fileBeingEdited)->second.GetText();
		t.write(ss.c_str(), ss.length());
	}
}

void Edit::Render(const ImGuiViewport *main_viewport) {
	// error markers
	//TextEditor::ErrorMarkers markers;
	/*	for (auto it = errors.begin(); it != errors.end(); ++it)
		{

			// Find
			auto r = findFileForLine(it->line_number);
			auto f = std::get<0>(r);
			auto ln = std::get<1>(r);

			if (f->filename == fileBeingEdited || f->filename == temp_name)
			{
				markers.insert(std::make_pair(ln, it->error));
			}
		}*/
	//editor.SetErrorMarkers(markers);

	// "breakpoint" markers
	//TextEditor::Breakpoints bpts;
	//bpts.insert(24);
	//bpts.insert(47);
	//editor.SetBreakpoints(bpts);

	std::string title = "Editor - " + fileBeingEdited;
	ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_Appearing);
	ImGui::SetNextWindowSize(ImVec2(main_viewport->Size.x, main_viewport->Size.y),
							 ImGuiCond_Appearing);
//	fontUIFixed->Scale = 0.5f;
	ImGui::PushFont(fontUIFixed);
	ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
	ImGui::Begin(title.c_str(),
				 &open,
				 ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove
					 | ImGuiWindowFlags_NoDecoration);

	ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_None;
	if (ImGui::BeginTabBar("EditorFiles", tab_bar_flags)) {
		for (auto &s : files) {
			if (ImGui::BeginTabItem(s.c_str())) {
				auto editor = &editors.find(s)->second;
				auto cpos = editor->GetCursorPosition();
				ImGui::Text("%6d/%-6d %6d lines | %s | %s | %s",
							cpos.mLine + 1,
							cpos.mColumn + 1,
							editor->GetTotalLines(),
							editor->IsOverwrite() ? "Ovr" : "Ins",
							editor->CanUndo() ? "*" : " ",
							editor->GetLanguageDefinition().mName.c_str());
//				ImGui::PushFont(fontUIFixed);
				editor->Render(s.c_str());
//				ImGui::PopFont();
				ImGui::EndTabItem();
			}
		}
		ImGui::EndTabBar();
	}
	ImGui::End();
	ImGui::PopStyleVar();
	ImGui::PopFont();
};