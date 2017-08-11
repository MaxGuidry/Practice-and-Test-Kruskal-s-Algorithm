#pragma once
#include "Application.h"
#include <vector>
#include "Bunny.h"
class BunnyApp :
	public Application
{
public:
	BunnyApp();
	~BunnyApp();
	bool Startup()override;
	bool Update(float deltaTime)override;
	bool Draw()override;
	std::vector<Bunny> BunnyList;
};
