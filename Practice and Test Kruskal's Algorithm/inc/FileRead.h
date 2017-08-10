#pragma once
#include<iostream>
class FileRead
{
public:
	FileRead();
	const char * Read(char * fileName);
	const char * m_data;
};