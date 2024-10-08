#include "AMovable.h"

AMovable::AMovable() 
{

}
AMovable::AMovable(Vector2 _dir, float _vitesse) : dir(_dir), vitesse(_vitesse)
{

}

void AMovable::SetDir(Vector2 _dir)
{
	dir = _dir;
}
void AMovable::SetSpeed(float _vitesse)
{
	vitesse = _vitesse;
}