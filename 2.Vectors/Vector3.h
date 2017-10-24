#pragma once
class Vector3
{
public:
	float mx;
	float my;
	float mz;

	Vector3();
	~Vector3();
	Vector3(float x, float y, float z);

	Vector3 operator+(Vector3 other);
	Vector3 operator-(Vector3 other);
	Vector3 operator*(float other);
	float Magnitude();
	Vector3 Normalize();
	float DotProduct(Vector3 other);
	Vector3 CrossProduct(Vector3 other);
};