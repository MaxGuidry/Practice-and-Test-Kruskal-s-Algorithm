#include"FileRead.h"
FileRead::FileRead(){}
void FileRead::Read(char * fileName)
{
	FILE * fp;
	fopen_s(&fp, fileName, "r");
	if (fp == nullptr)
	{
		perror("file not found");

	}
	fseek(fp, 0, SEEK_END);
	size_t num = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	const int size = num + 1;
	char * buffer = new char[size];
	

	size_t nm = fread(buffer, sizeof(char), num + 1, fp);
	buffer[nm] = '\0';	
	this->m_data = new char[num + 1];
	printf("m_data address is %p \n", this->m_data);
	printf("buffer address is %p \n", buffer);
	memcpy((void*)m_data, (void*)buffer, nm + 1);
	/*
	char * cp = buffer;
	this->m_data = new char[num + 1];
	for (int i = 0; i < num + 1; i++)
	{
		this->m_data[i] = *cp;
		cp++;
	}
	const char* d = (const char*)this->m_data;
	
	*/
	fclose(fp);
	printf("delete data at address %p \n", buffer);
	printf("m_data  address is %p \n", this->m_data);
	delete buffer;
}