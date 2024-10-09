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

Mob::Mob(float _x, float _y, Vector2 _dir, float _vieMax) : Entity(_x, _y), AMovable(_dir, 10), Alive(_vieMax, _vieMax)
{
	std::cout << "Mob just created at : x = " << _x << " ; y = " << _y << std::endl;
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
	std::cout << "Mob just moved at : x = " << _dir.GetX() << " ; y = " <<_dir.GetY() << std::endl;
}
void Mob::Move(Vector2 _dir)
{
	std::cout << "Mob just moved at : x = " << Entity::GetX() << " ; y = " << Entity::GetX() << std::endl;
}
void Mob::Move()
{
	std::cout << "Mob just moved at : x = " << Entity::GetX() << " ; y = " << Entity::GetX() << std::endl;
}