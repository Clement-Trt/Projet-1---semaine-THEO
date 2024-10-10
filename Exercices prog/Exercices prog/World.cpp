#include "World.h"

World::World()
{
	StaticObject* wall = new StaticObject(20, 10);
	BreakableObject* table = new BreakableObject(20, 20, 20, 1);
	Mob* mob = new Mob(5, 15, Vector2(2, 0), 20);
	Player* player = new Player(35, 15, Vector2(-2, 0), 10);

	listeEntity.push_back(wall);
	listeEntity.push_back(table);
	listeEntity.push_back(mob);
	listeEntity.push_back(player);

}

void World::Step()
{
	for (Entity* entity : listeEntity) // Parcours la liste tant que la boucle rencontre des Entity dans la liste
	{

		if (Mob* mob = dynamic_cast<Mob*>(entity)) // Vérification de "est-ce que l'objet contenu dans cette case de la liste est un mob")
		{
			mob->AfficherPosition();
			mob->Move(Vector2(listeEntity[1]->GetX(), listeEntity[1]->GetY()));
			mob->AfficherPosition();
			
		}
		if (Player* player = dynamic_cast<Player*>(entity))
		{
			if (listeEntity[2])
			{

			}


		}



	}
}