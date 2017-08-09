#include<math.h>
#include"Vector.h"
class Edge
{
public:
	Edge(int a,int b ,float Weight)
	{
		first = a;
		second = b;
		weight = Weight;
	}
	int first, second;
	float weight;
};