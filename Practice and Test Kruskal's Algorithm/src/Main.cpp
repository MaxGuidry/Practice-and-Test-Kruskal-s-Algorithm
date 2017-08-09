#include<iostream>
#include"Edge.h"  
template <class T> bool ArrayContains(const T * ptr, T a);
//const ptr can still be moved can not change the dereferenced values
template <class T> bool ArrayContains(const T * ptr, T a)
{
	while (ptr != nullptr)
	{
		if (a == *ptr)
			return true;
		ptr++;
	}
	return false;
}

Edge * Kruskal(Edge * edges)
{
	int * treesTMP = new int[255];
	int index = 0;
	int * beginning = treesTMP;
	while (edges != nullptr)
	{
		if (!ArrayContains(treesTMP, edges->first))
		{
			treesTMP[index] = edges->first;
			index++;
		}
		if (!ArrayContains(treesTMP, edges->second))
		{
			treesTMP[index] = edges->second;
			index++;
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
int main()
{
	Edge one = Edge(1, 2, 5);
	Edge two = Edge(100, 12, 5);
	Edge three = Edge(1, 2, 5);
	Edge * edges = new Edge[3]{ one, two, three };

	bool hasEdge = ArrayContains(edges, two);

	std::cout << "has edge??" << hasEdge << "\n";

	system("pause");
	return 0;
}


