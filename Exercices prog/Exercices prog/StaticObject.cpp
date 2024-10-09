#include "StaticObject.h"

#include <iostream>

StaticObject::StaticObject() : Entity()
{
	std::cout << "Static Object just created " << std::endl;
}
StaticObject::StaticObject(float _x, float _y) : Entity(_x, _y)
{
	std::cout << "Static Object just created at : x = " << _x << " ; y = " << _y << std::endl;
}
