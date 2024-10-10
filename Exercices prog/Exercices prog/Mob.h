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
	Mob(float _x, float _y, Vector2 _dir, float _vitesse, float _vieMax, float _vie);
	Mob(float _x, float _y, Vector2 _dir, float _vitesse, float _vieMax);
	Mob(float _x, float _y, Vector2 _dir, float _vieMax);

	void TakeDamage(float _degats) override;

	void AfficherPosition();

	void Move(Vector2 _dir, float _vitesse) override;
	void Move(Vector2 _dir) override;
	void Move() override;

	bool IsAlive();
};

#endif



