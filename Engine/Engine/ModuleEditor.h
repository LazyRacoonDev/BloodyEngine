#pragma once

#include "Module.h"
#include "GameObject.h"

#include "imgui.h"
#include "imgui_impl_sdl2.h"
#include "imgui_impl_opengl3.h"

class ModuleEditor : public Module
{
public:
	ModuleEditor(App* app);
	~ModuleEditor();

	bool Awake();
	bool CleanUp();

	void DrawEditor();
	void HierarchyWindow();
	void InspectorWindow();
	void ConsoleWindow();
	void ProjectWindow();
	void PreferencesWindow();
	void Docking();
	void MainMenuBar();

	void HierarchyTree(GameObject* node, bool isRoot = false);

public:
	GameObject* selectedGameObject = nullptr;

private:
	//Console
	bool showLogInfo = true;
	bool showLogWarnings = true;
	bool showLogErrors = true;

	ImVec4 infoColor = ImVec4(.25f, .5f, 1, 1);
	ImVec4 warningColor = ImVec4(1, .5f, 0, 1);
	ImVec4 errorColor = ImVec4(1, 0, 0, 1);
};