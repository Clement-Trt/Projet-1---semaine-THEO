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
	AMovable(Vector2 _dir, float _vitesse);

	virtual void SetDir(Vector2 _dir);
	virtual void SetSpeed(float _vitesse);
	virtual void Move(Vector2 _dir, float _vitesse) = 0;

};

#endif // !AMOVABLE_H