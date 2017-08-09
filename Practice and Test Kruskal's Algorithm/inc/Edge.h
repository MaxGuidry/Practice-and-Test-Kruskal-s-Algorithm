#pragma once

class Edge
{
public:
	Edge();
	Edge(int a, int b, int w);
	
	bool operator==(const Edge& e1);
	
	int first, second, weight, tmp;	
};