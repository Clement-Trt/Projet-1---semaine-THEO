#include "Player.h"
#include <iostream>

Player::Player()
{

}
Player::Player(float _x, float _y, float _vieMax, float _vie, Vector2 _dir, float _vitesse) : Entity(_x, _y), Alive(_vieMax, _vie), AMovable(_dir, _vitesse)
{
	std::cout << "Player just created at : x = " << _x << " ; y = " << _y << std::endl;
}

void Player::TakeDamage(float _degats)
{
	Alive::TakeDamage(_degats);

	if (vie <= 0)
	{
		vie = 0;
		std::cout << "Player just died." << std::endl;
	}

}

void Player::Move(Vector2 _dir, float _vitesse)
{
	std::cout << "Player just moved at : x = " << _dir.GetX() << " ; y = " << _dir.GetY() << std::endl;
}

void Player::AttackAlive(Alive* _alive)
{
	_alive->TakeDamage(10);

	std::cout << "Player just attacked" << std::endl;
}
