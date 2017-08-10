#include"FileRead.h"
FileRead::FileRead(){}
const char * FileRead::Read(char * fileName)
{
	FILE * fp;
	fopen_s(&fp, fileName, "r");
	if (fp == nullptr)
	{
		perror("file not found");

	}
	fseek(fp, 0, SEEK_END);
	long num = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	char * buffer = new char[(num / sizeof(char)) + 1];

	size_t nm = fread(buffer, sizeof(char), num + 1, fp);
	buffer[nm] = '\0';
	
	const char * ret = buffer;

	return ret;
	
}