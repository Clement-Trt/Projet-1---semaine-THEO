//#pragma once

#ifndef MOB_H
#define MOB_H

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable
{
protected:

public:
	Mob();
	Mob(float _x, float _y, float _vieMax, float _vie, Vector2 _dir, float _vitesse);

	void TakeDamage(float _degats) override;

	void Move(Vector2 _dir, float _vitesse) override;
};

#endif



