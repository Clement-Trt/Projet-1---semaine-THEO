//#pragma once

#ifndef PLAYER_H
#define PLAYER_H
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"


class Player : public Entity, public Alive, public AMovable, public IAttacker
{
protected:

public:
	Player();
	Player(float _x, float _y, Vector2 _dir, float _vitesse, float _vieMax, float _vie);
	Player(float _x, float _y, Vector2 _dir, float _vitesse, float _vieMax);
	Player(float _x, float _y, Vector2 _dir, float _vieMax);

	void TakeDamage(float _degats) override;

	void Move(Vector2 _dir, float _vitesse) override;
	void Move(Vector2 _dir) override;
	void Move() override;

	void AttackAlive(Alive* _alive) override;
};

#endif // !PLAYER_H




