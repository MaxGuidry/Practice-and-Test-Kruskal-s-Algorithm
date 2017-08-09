#include"Vector.h"
Vector2 operator * (const Vector2& v, float f)
{
	Vector2 newVec = v;
	newVec.x *= f;
	newVec.y *= f;
	return newVec;
}
Vector2 operator * (float f, const Vector2& v)
{
	Vector2 newVec = v;
	return newVec * f;
}