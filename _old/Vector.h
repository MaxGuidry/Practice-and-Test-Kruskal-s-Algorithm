#include<math.h>
class Vector2
{
public:float x;
	   float y;
	   Vector2 operator + (Vector2 v)
	   {
		   Vector2 newVec = Vector2();
		   newVec.x = this->x + v.x;
		   newVec.y = this->y + v.y;
		   return newVec;
	   }
	   Vector2 operator - (Vector2 v)
	   {
		   Vector2 newVec = Vector2();
		   newVec.x = this->x - v.x;
		   newVec.y = this->y - v.y;
		   return newVec;
	   }
	   friend Vector2 operator * (const Vector2& v, float f);

	   friend Vector2 operator * (float f, const Vector2& v);
	   Vector2()
	   {

	   }
	   Vector2(float x, float y)
	   {
		   this->x = x;
		   this->y = y;
	   }
	   float Magnitude()
	   {
		   return sqrt((this->x * this->x) + (this->y * this->y));
	   }

};
