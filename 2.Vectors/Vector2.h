#pragma once
class Vector2
{
public:
	float mx;
	float my;

	Vector2();
	~Vector2();
	Vector2(float x, float y);

	Vector2 operator+(Vector2 other);
	Vector2 operator-(Vector2 other);
	Vector2 operator*(float other);
	float Magnitude();
	Vector2 Normalize();
	float DotProduct(Vector2 other);
};

