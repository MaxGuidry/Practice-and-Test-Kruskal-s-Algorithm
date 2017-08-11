#include "Application.h"
#include<GLFW\glfw3.h>


Application::Application()
{
}


Application::~Application()
{
}


bool Application::Run(const char * appName, int width, int height, bool fullscreen)
{
	bool init = glfwInit();
	GLFWmonitor * m = (fullscreen) ? glfwGetPrimaryMonitor() : nullptr;


	m_window = glfwCreateWindow(500, 500, appName, m, nullptr);
	float deltaTime = 0;
	float cTime = glfwGetTime();
	float pTime = 0;
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
