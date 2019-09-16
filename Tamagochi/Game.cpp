#include "stdafx.h"
#include "Game.h"


Game::Game()
{
	this->_creature = nullptr;
	this->_controller = nullptr;
}

Game::Game(Creature* creature, Controller* controller)
{
	this->_creature = creature;
	this->_controller = controller;
}


Game::~Game()
{
}

bool Game::NextStep()
{
	// Todo: do something
	return false;
}
