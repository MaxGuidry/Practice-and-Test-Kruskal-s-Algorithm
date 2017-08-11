#include<iostream>
#include<Windows.h>
#include"Edge.h"  
#include"FileRead.h"
template <class T> bool ArrayContains(const T * ptr, T a);
Edge * Kruskal(Edge * edges);
//const ptr can still be moved can not change the dereferenced values

struct Bob
{
	int a, b, c;
	char e;
};
void bobfunc();
void bobfunc()
{

}/*
void testvoidptr(void* inbob)
{
	void voo();
	void * voidp;
	
	void(*funcp)();
	void(*func)();
	inbob = &voo;
	(void)inbob();

	(void)inbob();

}*/


void recast(void* func)
{

}
int main()
{
	/*int size = 0;
	std::cout << "How many pancake eaters: ";
	std::cin >> size;
	int * pancakesEaten = new int[size];
	int * people = new int[size];
	int * peopleOrigin = people;
	int * origin = pancakesEaten;
	for (int i = 0; i < size; i++)
	{
		*people = i +1;
		people++;
		int num = 0;
		std::cout << "How many did person: " << i +1 << " eat?" << std::endl;;
		std::cin >> num;
		*pancakesEaten = num;
		pancakesEaten++;
	}
	pancakesEaten = origin;
	people = peopleOrigin;
	for (int i = 0; i < (size * size); i++)
	{
		if (i % (size - 1) == 0)
		{
			pancakesEaten = origin;
			people = peopleOrigin;
		}
		if (*pancakesEaten < *(pancakesEaten + 1))
		{
			std::swap(*pancakesEaten, *(pancakesEaten + 1));
			std::swap(*people, *(people + 1));
		}
		people++;
		pancakesEaten++;
	}
	std::cout << "\n\n";
	pancakesEaten = origin;
	people = peopleOrigin;
	for (int i = 0; i < size; i++)
	{
		std::cout <<"Person: "<<*people<< " ate: "<< *pancakesEaten << " Pancakes"<< std::endl;
		pancakesEaten++;
		people++;
	}
	pancakesEaten = origin;
	people = peopleOrigin;
	std::cout << "Person " << *people << " ate the most pancakes, they ate: " << *pancakesEaten << " pancakes.\n";
	delete[] people;
	delete[] pancakesEaten;
*/

	FileRead f = FileRead();
	f.Read("test.txt");
	std::cout << f.m_data << std::endl;

	void(*foo)(int);
	void foo();
	auto func_ptr = &foo;
	(*func_ptr)(5);


	Bob notp = { 5,3,2,'1' };
	testvoidptr((void*)&notp);
	testvoidptr(testvoidptr);



	/*Edge one = Edge(1, 2, 5);
	Edge two = Edge(100, 12, 5);
	Edge three = Edge(1, 2, 5);
	Edge * edges = new Edge[3]{ one, two, three };

	while (edges != nullptr)
	{
		edges++;
		std::cout << edges->first << std::endl;
	}




	bool hasEdge = ArrayContains(edges, two);

	Kruskal(edges);*/
	int num = 5;
	printf("num is %i", num);

	printf("num is %i", (void*)num);
	system("pause");
	return 0;
}

template <class T> bool ArrayContains(const T * ptr, T a)
{
	while (ptr != nullptr)
	{
		if (ptr == nullptr)
			return false;
		if (a == *ptr)
			return true;
		ptr++;
	}
	return false;
}

Edge * Kruskal(Edge * edges)
{
	int * treesTMP = new int[1];
	int index = 1;
	int * beginning = treesTMP;
	*treesTMP = edges->first;
	while (edges != nullptr)
	{

		if (!ArrayContains(treesTMP, edges->first))
		{
			index++;
			int * tmp = new int[index];
			memcpy(tmp, treesTMP, index * sizeof(int));
			tmp[index] = edges->first;
			delete(treesTMP);
			treesTMP = tmp;

		}
		if (!ArrayContains(treesTMP, edges->second))
		{
			index++;
			int * tmp = new int[index];
			memcpy(tmp, treesTMP, index * sizeof(int));
			tmp[index] = edges->second;
			delete(treesTMP);
			treesTMP = tmp;
		}
		edges++;
	}
	int * trees = new int[index];

	memcpy(trees, treesTMP, index * sizeof(int));
	while (edges != nullptr)
	{
		std::cout << *treesTMP << std::endl;
		treesTMP++;
	}
	return edges;
}

