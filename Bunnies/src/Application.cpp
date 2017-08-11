#include "Application.h"
#include"gl_core_4_4.h"
#include<GLFW\glfw3.h>

Application::Application(): m_gameOver(false), m_window(nullptr)
{
}


Application::~Application()
{
}


bool Application::Run(const char * appName, int width, int height, bool fullscreen)
{
	
	bool init = glfwInit();
	GLFWmonitor * m = (fullscreen) ? glfwGetPrimaryMonitor() : nullptr;
	

	m_window = glfwCreateWindow( width,height, appName, m, nullptr);
	glfwMakeContextCurrent(m_window);
	if (ogl_LoadFunctions() == ogl_LOAD_FAILED) {
		glfwDestroyWindow(m_window);
		glfwTerminate();
		return false;
	}
	float deltaTime = 0;
	float cTime = glfwGetTime();
	float pTime = 0;
	Startup();
	while (!m_gameOver)
	{
		cTime = glfwGetTime();
		deltaTime = cTime - pTime;
		pTime = cTime;
		glfwPollEvents();
		Update(deltaTime);
		Draw();
		glfwSwapBuffers(m_window);
		m_gameOver = m_gameOver || glfwWindowShouldClose(m_window);


	}
	return true;
}
