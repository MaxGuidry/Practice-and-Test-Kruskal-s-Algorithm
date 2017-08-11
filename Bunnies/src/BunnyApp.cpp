#include "BunnyApp.h"



BunnyApp::BunnyApp()
{
}


BunnyApp::~BunnyApp()
{
}

bool BunnyApp::Startup()
{
	return true;
}

bool BunnyApp::Update(float deltaTime)
{
	return true;
}

bool BunnyApp::Draw()

{
	glfwMakeContextCurrent(m_window);
	glClearColor(.7f, .3f, .75f,1.0f);
	glVertex2d(2, 2);
	glVertex2d(3, 3);
	glVertex2d(4, 4);
	glClear(GL_COLOR_BUFFER_BIT);
	return true;
}
