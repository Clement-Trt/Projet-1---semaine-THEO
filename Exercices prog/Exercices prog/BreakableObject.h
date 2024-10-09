//#pragma once

#ifndef BREAKABLEOBJECT_H
#define BREAKABLEOBJECT_H

#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive
{
protected:

public:
	BreakableObject();
	BreakableObject(float _x, float _y, float _vieMax, float _vie);
	BreakableObject(float _x, float _y, float _vieMax);

	void TakeDamage(float _degats) override;

};

#endif // !BREAKABLEOBJECT_H


