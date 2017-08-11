#include<iostream>
#include<time.h>
#include"BunnyApp.h"
void main()
{
	srand(time(NULL));
	Application * app = new BunnyApp();
	app->Run("Bunnies", 1200, 800, false);
	
	
}