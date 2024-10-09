//#pragma once

#ifndef AMOVABLE_H
#define AMOVABLE_H

#include "Vector2.h"


class AMovable
{
protected:
	Vector2 dir;
	float vitesse;

public:
	AMovable();
	AMovable(Vector2 _dir, float _vitesse);

	virtual void SetDir(Vector2 _dir);
	virtual void SetSpeed(float _vitesse);
	virtual void Move(Vector2 _dir, float _vitesse) = 0;
	virtual void Move(Vector2 _dir) = 0;
	virtual void Move() = 0;

};

#endif // !AMOVABLE_H