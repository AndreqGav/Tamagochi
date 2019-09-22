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
	if (this->_creature == nullptr || this->_controller == nullptr)
		return false;

	Action action = this->_controller->GetAction();
	int value = 0;

	switch (action)
	{
	case feed:
		value = this->_controller->GetValue();
		this->_creature->Eat(value);
		break;
	case play:
		this->_creature->Play();
		break;
	case sleep:
		value = this->_controller->GetValue();
		this->_creature->Sleep(value);
		break;
	default: // TODO: можно и по-красивее и понятнее сделать
		return true;
	}

	this->_creature->NextStep();

	return this->_creature->GetHealth() > 0;
}
