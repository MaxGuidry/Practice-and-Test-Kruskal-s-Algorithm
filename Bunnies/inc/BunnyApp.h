#pragma once
#include "Application.h"
class BunnyApp :
	public Application
{
public:
	BunnyApp();
	~BunnyApp();
	bool Startup()override;
	bool Update(float deltaTime)override;
	bool Draw()override;
};
