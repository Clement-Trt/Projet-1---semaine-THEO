#include "BreakableObject.h"

#include <iostream>

BreakableObject::BreakableObject()
{

}
BreakableObject::BreakableObject(float _x, float _y, float _vieMax, float _vie) : Entity(_x, _y), Alive(_vieMax, _vie)
{
	std::cout << "Breakable Object just created at : x = " << _x << " ; y = " << _y << std::endl;
}
BreakableObject::BreakableObject(float _x, float _y, float _vieMax) : Entity(_x, _y), Alive(_vieMax, _vieMax)
{
	std::cout << "Breakable Object just created at : x = " << _x << " ; y = " << _y << std::endl;
}

void BreakableObject::TakeDamage(float _degats)
{
	Alive::TakeDamage(_degats);
	std::cout << "Object took damage" << std::endl;

	if (vie <= 0)
	{
		vie = 0;
		std::cout << "Breakable Object just broke." << std::endl;
	}

}