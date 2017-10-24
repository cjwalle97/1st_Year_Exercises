#include "Vector2.h"
#include "Vector3.h"

int main()
{
	Vector2 a(5, 3);
	Vector2 b(3, 3);
	Vector2 c = a + b;
	Vector2 d = a - b;
	Vector2 e = a * 5;
	Vector2 f = a.Normalize();
	float dot = a.DotProduct(b);

	/*Vector3 a(5, 3, 2);
	Vector3 b(3, 3, 6);
	Vector3 c = a + b;
	Vector3 d = a - b;
	Vector3 e = a * 3;
	Vector3 f = a.Normalize();
	float dot = a.DotProduct(b);
	Vector3 g = a.CrossProduct(b);*/
	return 0;
}