#pragma once

class Bunny
{
public:
	Bunny();
	
	enum Color
	{
		WHITE,
		BROWN,
		BLACK,
		SPOTTED,
	};
	unsigned int age;
	bool gender;
	Color color;
	const char * name;
	bool RVB;
private:
	bool SetColor(Bunny::Color color);

};