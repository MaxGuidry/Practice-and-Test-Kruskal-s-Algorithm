#pragma once
#include<iostream>
class FileRead
{
public:
	FileRead();
	void Read(char * fileName);
	const char * m_data;
};