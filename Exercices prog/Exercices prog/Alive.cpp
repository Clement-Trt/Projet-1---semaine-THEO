#include "Alive.h"

Alive::Alive(float _vieMax, float _vie) : vie_max(_vieMax), vie(_vie)
{

}

float Alive::GetMaxLife()
{
	return vie_max;
}
float Alive::GetLife()
{
	return vie;
}
void Alive::TakeDamage(float _degats)
{
	vie -= _degats;
}