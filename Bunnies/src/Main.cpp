#include<iostream>
#include<time.h>
#include<GLFW\glfw3.h>
#include"BunnyApp.h"
void main()
{
	
	
	
	Application * app = new BunnyApp();
	app->Run("Bunnies", 1200, 800, false);
	
	
}