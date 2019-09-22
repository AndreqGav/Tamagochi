#include "stdafx.h"
#include "Creature.h"
#include "Controller.h"
#include "Game.h"

#include "ConsoleController.h"

#include "Cat.h"

Controller* SetController(int i = 0);
Creature* SetCreature(int i = 0);

int main()
{
	setlocale(LC_ALL, "Russian");
	// TODO: спрашивать о выборе сначала
	Controller* controller = SetController(0);
	Creature* creature = SetCreature(0);

	Game* game = new Game(creature,controller);

	bool continueGame = true;

	while (continueGame)
	{
		continueGame = game->NextStep();
	}

    return 0;
}

Controller* SetController(int i)
{
	Controller* controller = nullptr;
	switch (i)
	{
	case 0:
		controller = new ConsoleController();
		break;
	default:
		break;
	}
	return controller;
}

Creature* SetCreature(int i) 
{
	Creature* creature = nullptr;
	switch (i)
	{
	case 0:
		creature = new Cat();
		break;
	default:
		break;
	}
	return creature;
}

