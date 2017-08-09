#include<iostream>
#include<list>
#include"Vector.h"
#include"Edge.h"
int main()
{
	
	std::list<Edge> edges = std::list<Edge>();
	Edge one = Edge(1, 2, 5);
	Edge two = Edge(1, 3, 5);
	Edge three = Edge(2, 3, 5);
	edges.push_back(one);
	edges.push_back(two);
	edges.push_back(three);
	std::cout << Kruskal(edges) << std::endl;
	system("pause"); 
	return 0;
}

std::list<int> Kruskal(std::list<Edge> edges)
{
	std::list<int> vertices = std::list<int>();
	for (std::list<Edge>::iterator iter = edges.begin(); iter != edges.end(); ++iter)
	{
		if (!SearchList(edges, *iter)
			vertices.push_back(*iter);

	}
	return vertices;
	
}

template <T> bool SearchList(std::list<T> list, T item)
{
	if (list.front() == item)
		return true;
	for (std::list<T>::iterator iter = list.begin(); iter != list.end(); ++iter)
	{
		if (*iter == item)
			return true;

	}
	return false;
}