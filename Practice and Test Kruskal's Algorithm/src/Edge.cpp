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
