//#pragma once

#ifndef ENTITY_H
#define ENTITY_H

#include "Vector2.h"


class Entity
{
protected:
	Vector2 position;


public:
	Entity();
	Entity(float _x, float _y);
	~Entity();

	virtual float GetX();
	virtual float GetY();
	virtual void SetX(float _x);
	virtual void SetY(float _y);
	virtual void SetXY(float _x, float _y);


};


#endif // !ENTITY_H