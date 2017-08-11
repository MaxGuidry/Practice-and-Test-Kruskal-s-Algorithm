#include "Bunny.h"
#include <cstdlib>
#include "FileRead.h"
#include<iostream>
Bunny::Bunny()
{
	age = 0;
	gender = (rand() % 100 + 1 > 50) ? false : true;
	int c =rand() % 4 + 1;
	color = (Bunny::Color)c;
	
	FileRead names = FileRead();
	names.Read("Name.bunny");
	int nameIndex = rand() % 20;
	if (gender)
		nameIndex += 20;
	const char * namep = names.m_data;
	for(int i =0;i<nameIndex;)
	{
		if (*namep == '\n')
			i++;
		namep++;
	}
	int size = 0;
	for(int i = 0;i<50;i++)
	{
		size++;
		if (*namep == '\n')
		{
			namep++;
			break;
		}
		namep++;
	}
	
	char * n = new char[size+1];
	for(int i =0;i<size;i++)
	{
		n[i] = *namep;
		namep++;
	}
	n[size -1] = '\0';
	name = new char[size + 1];
	memcpy((void *)name, n, size);
	delete n;
	RVB = (rand() % 100 + 1 < 3) ? true : false;
}

bool Bunny::SetColor(Bunny::Color color)
{
	return false;
}
