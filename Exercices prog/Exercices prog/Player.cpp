#include "Player.h"
#include <iostream>

Player::Player()
{

}
Player::Player(float _x, float _y, Vector2 _dir, float _vitesse, float _vieMax, float _vie) : Entity(_x, _y), AMovable(_dir, _vitesse), Alive(_vieMax, _vie)
{
	std::cout << "Player just created at : x = " << _x << " ; y = " << _y << std::endl;
}
Player::Player(float _x, float _y, Vector2 _dir, float _vitesse, float _vieMax) : Entity(_x, _y), AMovable(_dir, _vitesse), Alive(_vieMax, _vieMax)
{
	std::cout << "Player just created at : x = " << _x << " ; y = " << _y << std::endl;
}
Player::Player(float _x, float _y, Vector2 _dir, float _vieMax) : Entity(_x, _y), AMovable(_dir, 1), Alive(_vieMax, _vieMax)
{
	std::cout << "Player just created at : x = " << _x << " ; y = " << _y << std::endl;
}

void Player::TakeDamage(float _degats)
{
	Alive::TakeDamage(_degats);
	std::cout << "Player took damage" << std::endl;

	if (vie <= 0)
	{
		vie = 0;
		std::cout << "Player just died." << std::endl;
	}

}

void Player::Move(Vector2 _dir, float _vitesse)
{
	if (_dir.GetX() < Entity::GetX())
	{
		dir.SetX(-1);
		Entity::SetX(Entity::GetX() + (dir.GetX() * vitesse));

	}
	if (_dir.GetX() > Entity::GetX())
	{
		dir.SetX(1);
		Entity::SetX(Entity::GetX() + (dir.GetX() * vitesse));
	}

	if (_dir.GetX() < Entity::GetX())
	{
		dir.SetX(-1);
		Entity::SetY(Entity::GetY() + (dir.GetY() * vitesse));
	}
	if (_dir.GetX() > Entity::GetX())
	{
		dir.SetX(1);
		Entity::SetY(Entity::GetY() + (dir.GetY() * vitesse));
	}

	std::cout << "Player just moved at : x = " << Entity::GetX() << " ; y = " << Entity::GetX() << std::endl;
}

void Player::Move(Vector2 _dir)
{
	if (_dir.GetX() < Entity::GetX())
	{
		dir.SetX(-1);
		Entity::SetX(Entity::GetX() + (dir.GetX() * vitesse));

	}
	if (_dir.GetX() > Entity::GetX())
	{
		dir.SetX(1);
		Entity::SetX(Entity::GetX() + (dir.GetX() * vitesse));
	}

	if (_dir.GetX() < Entity::GetX())
	{
		dir.SetX(-1);
		Entity::SetY(Entity::GetY() + (dir.GetY() * vitesse));
	}
	if (_dir.GetX() > Entity::GetX())
	{
		dir.SetX(1);
		Entity::SetY(Entity::GetY() + (dir.GetY() * vitesse));
	}

	std::cout << "Player just moved at : x = " << Entity::GetX() << " ; y = " << Entity::GetX() << std::endl;
}
void Player::Move()
{
	Entity::SetX(Entity::GetX() + dir.GetX() * vitesse);

	Entity::SetY(Entity::GetY() + dir.GetY() * vitesse);

	std::cout << "Player just moved at : x = " << Entity::GetX() << " ; y = " << Entity::GetX() << std::endl;
}

void Player::AttackAlive(Alive* _alive)
{
	_alive->TakeDamage(10);

	std::cout << "Player just attacked" << std::endl;
}
