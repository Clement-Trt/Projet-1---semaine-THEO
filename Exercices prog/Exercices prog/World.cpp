#include "World.h"

World::World()
{
	StaticObject* wall = new StaticObject(20, 10);
	BreakableObject* table = new BreakableObject(20, 20, 20);
	Mob* mob = new Mob(5, 15, Vector2(2, 0), 20);
	Player* player = new Player(35, 15, Vector2(-2, 0), 10);

	listeEntity.push_back(wall);
	listeEntity.push_back(table);
	listeEntity.push_back(mob);
	listeEntity.push_back(player);

}

void World::Step()
{
	for (Entity* entity : listeEntity)
	{
		Mob* mob;
		Player* player;
		BreakableObject* breakableObject;

		if (mob = dynamic_cast<Mob*>(entity))
		{
			mob->Move(Vector2(mob->GetX() - breakableObject->GetX(), mob->GetY() - breakableObject->GetY()))

			
			

		}
		if (player = dynamic_cast<Player*>(entity))
		{

		}
		if (breakableObject = dynamic_cast<BreakableObject*>(entity))
		{

		}



	}
}