//#pragma once

#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2
{
protected:
	float x, y;

public:

	Vector2(); 
	Vector2(float _x, float _y);
	~Vector2();

	float GetX();
	float GetY();
	void SetX(float _x);
	void SetY(float _y);
	void SetXY(float _x, float _y);

	Vector2 operator+(const Vector2& _v);

};

#endif