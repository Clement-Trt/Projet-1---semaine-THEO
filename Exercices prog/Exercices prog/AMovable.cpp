#include "AMovable.h"

AMovable::AMovable() : dir(0,0), vitesse(0)
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