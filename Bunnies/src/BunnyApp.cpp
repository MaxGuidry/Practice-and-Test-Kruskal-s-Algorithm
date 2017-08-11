#include "BunnyApp.h"
#include "gl_core_4_4.h"

BunnyApp::BunnyApp()
{
}


BunnyApp::~BunnyApp()
{
}

bool BunnyApp::Startup()
{
	glClearColor(.7f, .3f, .75f, 1.0f);
	for (int i = 0; i < 5; i++)
	{
		Bunny b = Bunny();
		BunnyList.push_back(b);
	}
	

	return true;
}

bool BunnyApp::Update(float deltaTime)
{
	return true;
}

bool BunnyApp::Draw()

{
	
	
	
	glClear(GL_COLOR_BUFFER_BIT);

	return true;
}
