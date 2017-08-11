#pragma once
#include <imgui/imgui.h>
struct GLFWwindow;




class Application
{
public:
	Application();
	virtual ~Application();
	virtual bool Startup() = 0;
	virtual bool Update(float deltaTime) = 0;
	virtual bool Draw() = 0;
	bool Run(const char * appName, int width, int height, bool fullscreen);
	bool m_gameOver;
	GLFWwindow * m_window;
};

