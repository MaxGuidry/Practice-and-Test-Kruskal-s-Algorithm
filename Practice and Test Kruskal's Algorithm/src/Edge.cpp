#include"Edge.h"

Edge::Edge() : first(0), second(0), weight(0), tmp(0)
{
}

Edge::Edge(int a, int b, int w)
{
	this->first = a;
	this->second = b;
	this->weight = w;
	this->tmp = 0;
}

bool Edge::operator==(const Edge & e1)
{
	return this->first == e1.first && this->second == e1.second && this->weight == e1.weight;
}
bool operator == (const Edge & e1, const Edge & e2)
{
	return e1.first == e2.first && e1.second == e2.second && e1.weight == e2.weight;
}
