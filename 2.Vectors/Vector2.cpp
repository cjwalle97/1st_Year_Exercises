#include "Vector2.h"
#include <iostream>

Vector2::Vector2()
{
}

Vector2::~Vector2()
{
}

Vector2::Vector2(float x, float y)
{
	mx = x;
	my = y;
}

Vector2 Vector2::operator+(Vector2 other)
{
	Vector2 newvec;
	newvec.mx = mx + other.mx;
	newvec.my = my + other.my;
	return newvec;
}

Vector2 Vector2::operator-(Vector2 other)
{
	Vector2 newvec;
	newvec.mx = mx - other.mx;
	newvec.my = my - other.my;
	return newvec;
}

Vector2 Vector2::operator*(float other)
{
	Vector2 newvec;
	newvec.mx = mx * other;
	newvec.my = my * other;
	return newvec;
}

float Vector2::Magnitude()
{
	float mag = sqrt((mx * mx) + (my * my));
	return mag;
}

Vector2 Vector2::Normalize()
{
	Vector2 normal;
	normal.mx = mx / Magnitude();
	normal.my = my / Magnitude();
	return normal;
}

float Vector2::DotProduct(Vector2 other)
{
	float dot = (mx * other.mx) + (my * other.my);
	return dot;
}
