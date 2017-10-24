#include <iostream>

struct vec2
{
	float x;
	float y;
	vec2() {}
	vec2(float a, float b)
	{
		x = a;
		y = b;
	}
};

struct vec3
{
	float x;
	float y;
	float z;
};

vec2 Add(vec2 left, vec2 right)
{
	vec2 newvec;
	newvec.x = left.x + right.x;
	newvec.y = left.y + right.y;
	return newvec;
}

vec2 Subtract(vec2 left, vec2 right)
{
	vec2 newvec;
	newvec.x = left.x - right.x;
	newvec.y = left.y - right.y;
	return newvec;
}

vec2 Scale(vec2 vec, float scale)
{
	vec2 newvec;
	newvec.x = vec.x * scale;
	newvec.y = vec.y * scale;
	return newvec;
}
