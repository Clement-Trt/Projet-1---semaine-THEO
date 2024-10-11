#include "Mob.h"
#include <iostream>

Mob::Mob()
{

}
Mob::Mob(float _x, float _y, Vector2 _dir, float _vitesse, float _vieMax, float _vie) : Entity(_x, _y), AMovable(_dir, _vitesse), Alive(_vieMax, _vie)
{
	std::cout << "Mob just created at : x = " << _x << " ; y = " << _y << std::endl;
}
Mob::Mob(float _x, float _y, Vector2 _dir, float _vitesse, float _vieMax) : Entity(_x, _y), AMovable(_dir, _vitesse), Alive(_vieMax, _vieMax)
{
	std::cout << "Mob just created at : x = " << _x << " ; y = " << _y << std::endl;
}

Mob::Mob(float _x, float _y, Vector2 _dir, float _vieMax) : Entity(_x, _y), AMovable(_dir, 1), Alive(_vieMax, _vieMax)
{
	std::cout << "Mob just created at : x = " << _x << " ; y = " << _y << std::endl;
}

void Mob::AfficherPosition()
{
	std::cout << "Mob is at : x = " << Entity::GetX() << " ; y = " << Entity::GetY() << std::endl;
}

void Mob::TakeDamage(float _degats)
{
	Alive::TakeDamage(_degats);
	std::cout << "Mob took damage" << std::endl;

	if (vie <= 0)
	{
		vie = 0;
		std::cout << "Mob just died." << std::endl;
	}
}

void Mob::Move(Vector2 _dir, float _vitesse)
{
	if (_dir.GetX() < Entity::GetX())
	{
		dir.SetX(-1);
		Entity::SetX(Entity::GetX() + (dir.GetX() * _vitesse));

	}
	if (_dir.GetX() > Entity::GetX())
	{
		dir.SetX(1);
		Entity::SetX(Entity::GetX() + (dir.GetX() * _vitesse));
	}

	if (_dir.GetX() < Entity::GetX())
	{
		dir.SetX(-1);
		Entity::SetY(Entity::GetY() + (dir.GetY() * _vitesse));
	}
	if (_dir.GetX() > Entity::GetX())
	{
		dir.SetX(1);
		Entity::SetY(Entity::GetY() + (dir.GetY() * _vitesse));
	}
	std::cout << "Mob just moved at : x = " << _dir.GetX() << " ; y = " <<_dir.GetY() << std::endl;
}
void Mob::Move(Vector2 _dir)
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

	std::cout << "Mob just moved at : x = " << Entity::GetX() << " ; y = " << Entity::GetX() << std::endl;
}
void Mob::Move()
{
	std::cout << "Mob just moved at : x = " << Entity::GetX() << " ; y = " << Entity::GetX() << std::endl;
}


