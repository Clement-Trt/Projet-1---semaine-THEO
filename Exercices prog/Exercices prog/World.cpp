#include "World.h"

#include <iostream>

World::World()
{
	StaticObject* wall = new StaticObject(20, 10);
	BreakableObject* table = new BreakableObject(20, 20, 20, 1);
	Mob* mob = new Mob(5, 15, Vector2(0, 0), 20);
	Player* player = new Player(35, 15, Vector2(0, 0), 10);

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
			if (mob->IsAlive())
			{
				for (Entity* entity : listeEntity) // Parcours la liste tant que la boucle rencontre des Entity dans la liste
				{
					if (BreakableObject* bO = dynamic_cast<BreakableObject*>(entity))
					{
						mob->Move(Vector2(bO->GetX(), bO->GetY()));
						mob->AfficherPosition();
					}
				}

			}


		}
		if (Player* player = dynamic_cast<Player*>(entity))
		{
			for (Entity* entity : listeEntity) // Parcours la liste tant que la boucle rencontre des Entity dans la liste
			{
				if (Mob* mob = dynamic_cast<Mob*>(entity)) // Vérification de "est-ce que l'objet contenu dans cette case de la liste est un mob")
				{
					if (mob->IsAlive())
					{
						if ((abs(mob->GetX() - player->GetX()) > 1) || (abs(mob->GetY() - player->GetY()) > 1))
						{
							player->Move(Vector2(mob->GetX(), mob->GetY()));
						}

						if ((abs(mob->GetX() - player->GetX()) <= 1) && (abs(mob->GetY() - player->GetY()) <= 1))
						{
							std::cout << std::endl << "Mob life " << mob->GetLife() << std::endl;
							player->AttackAlive(mob);
						}
					}
					if (not mob->IsAlive())
					{
						for (Entity* entity : listeEntity) // Parcours la liste tant que la boucle rencontre des Entity dans la liste
						{
							if (BreakableObject* bO = dynamic_cast<BreakableObject*>(entity)) // Vérification de "est-ce que l'objet contenu dans cette case de la liste est un mob")
							{
								if ((abs(bO->GetX() - player->GetX()) > 1) || (abs(bO->GetY() - player->GetY()) > 1))
								{
									player->Move(Vector2(bO->GetX(), bO->GetY()));
								}

								if ((abs(bO->GetX() - player->GetX()) <= 1) && (abs(bO->GetY() - player->GetY()) <= 1))
								{
									std::cout << "Table life " << bO->GetLife() << std::endl << std::endl;
									player->AttackAlive(bO);
								}
							}
						}
					}
				}
			}
		}
	}
}


bool World::KillableStillAlive()
{
	bool mobDead = false, bODead = false;

	for (Entity* entity : listeEntity) // Parcours la liste tant que la boucle rencontre des Entity dans la liste
	{

		if (Mob* mob = dynamic_cast<Mob*>(entity)) // Vérification de "est-ce que l'objet contenu dans cette case de la liste est un mob")
		{
			if (mob->GetLife() <= 0)
			{
				mobDead = true;
			}

		}
		if (BreakableObject* bO = dynamic_cast<BreakableObject*>(entity))
		{
			if (bO->GetLife() <= 0)
			{
				bODead = true;
			}
		}
	}
	if (mobDead && bODead)
	{
		return false;
	}
	else return true;
}