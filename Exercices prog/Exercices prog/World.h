//#pragma once

#ifndef WORLD_H
#define WORLD_H

#include "Entity.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include <vector>

class World
{
protected:
	std::vector<Entity*> listeEntity;



public:
	World();

	void Step();

};

#endif