#include "Vector3.h"
#include <iostream>


Vector3::Vector3()
{
}


Vector3::~Vector3()
{
}

Vector3::Vector3(float x, float y, float z)
{
	mx = x;
	my = y;
	mz = z;
}

Vector3 Vector3::operator+(Vector3 other)
{
	Vector3 newvec;
	newvec.mx = mx + other.mx;
	newvec.my = my + other.my;
	newvec.mz = mz + other.mz;
	return newvec;
}

Vector3 Vector3::operator-(Vector3 other)
{
	Vector3 newvec;
	newvec.mx = mx - other.mx;
	newvec.my = my - other.my;
	newvec.mz = mz - other.mz;
	return newvec;
}

Vector3 Vector3::operator*(float other)
{
	Vector3 newvec;
	newvec.mx = mx * other;
	newvec.my = my * other;
	newvec.mz = mz * other;
	return newvec;
}

float Vector3::Magnitude()
{
	float mag;
	mag = sqrt((mx * mx) + (my * my) + (mz *mz));
	return mag;
}

Vector3 Vector3::Normalize()
{
	Vector3 normal;
	normal.mx = mx / Magnitude();
	normal.my = my / Magnitude();
	normal.mz = mz / Magnitude();
	return normal;
}

float Vector3::DotProduct(Vector3 other)
{
	float dot = (mx * other.mx) + (my * other.my) + (mz * other.mz);
	return dot;
}

Vector3 Vector3::CrossProduct(Vector3 other)
{
	Vector3 newvec;
	newvec.mx = (mz * other.my) - (my * other.mz);
	newvec.my = (mz * other.mx) - (mx * other.mz);
	newvec.mz = (my * other.mx) - (mx * other.my);
	return newvec;
}
