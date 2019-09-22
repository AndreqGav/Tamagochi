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
	Controller* controller = SetController();
	Creature* creature = SetCreature();

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
	return nullptr;
}

Creature* SetCreature(int i) 
{
	return nullptr;
}

