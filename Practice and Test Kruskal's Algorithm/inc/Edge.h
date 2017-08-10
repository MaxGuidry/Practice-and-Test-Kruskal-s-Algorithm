#pragma once

class Edge
{
public:
	Edge();
	Edge(int a, int b, int w);
	friend bool operator == (const Edge& e1, const Edge& e2);
	bool operator==(const Edge& e1);
	
	int first, second, weight, tmp;	
};