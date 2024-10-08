#include "Entity.h"

Entity::Entity()
{

}
Entity::Entity(float _x, float _y) : position(_x, _y)
{

}

Entity::~Entity()
{

}

float Entity::GetX()
{
	return position.GetX();;
}

float Entity::GetY()
{
	return position.GetY();
}

void Entity::SetX(float _x)
{
	position.SetX(_x);
}

void Entity::SetY(float _y)
{
	position.SetY(_y);
}

void Entity::SetXY(float _x, float _y)
{
	position.SetX(_x);
	position.SetY(_y);
}