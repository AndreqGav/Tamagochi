#pragma once
#include "Creature.h"
#include "Controller.h"

class Game
{
private:
	Creature* _creature;
	Controller* _controller;

public:
	Game();
	Game(Creature* creature, Controller* controller);
	~Game();

	bool NextStep();
};

