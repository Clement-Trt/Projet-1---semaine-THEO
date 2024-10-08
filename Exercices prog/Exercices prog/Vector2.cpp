#include "Vector2.h"

Vector2::Vector2(float _x, float _y) : x(_x), y(_y)
{

}

Vector2::~Vector2()
{

}

float Vector2::GetX()
{
	return x;
}

float Vector2::GetY()
{
	return y;
}

void Vector2::SetX(float _x)
{
	x = _x;
}

void Vector2::SetY(float _y)
{
	y = _y;
}

void Vector2::SetXY(float _x, float _y)
{
	x = _x;
	y = _y;
}