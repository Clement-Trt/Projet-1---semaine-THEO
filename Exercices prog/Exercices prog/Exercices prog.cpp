// Exercices prog.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Player.h"
#include "Mob.h"
#include "World.h"


int main()
{
	World world;
	/*
	StaticObject wall(20, 10);
	BreakableObject table(20, 20, 20);
	Mob* mob = new Mob(5, 15, Vector2(2, 0), 30);
	Player* p = new Player(35, 15, Vector2(-2, 0), 50);

	p->AttackAlive(mob);

	mob->TakeDamage(10);

	p->TakeDamage(20);

	table.TakeDamage(15);

	p->Move();*/


	while (world.KillableStillAlive())
	{
		world.Step();
	}

	std::cout << "\n\nSimulation terminee\n\n";
	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
