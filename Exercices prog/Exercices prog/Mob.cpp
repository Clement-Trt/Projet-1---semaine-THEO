#include "Mob.h"
#include <iostream>

Mob::Mob()
{

}
Mob::Mob(float _x, float _y, float _vieMax, float _vie, Vector2 _dir, float _vitesse) : Entity(_x, _y), Alive(_vieMax, _vie), AMovable(_dir, _vitesse)
{
	std::cout << "Mob just created at : x = " << _x << " ; y = " << _y << std::endl;
}

void Mob::TakeDamage(float _degats)
{
	Alive::TakeDamage(_degats);

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