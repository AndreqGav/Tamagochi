#include "stdafx.h"
#include "Game.h"
#include <windows.h>



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

	// TODO: ��������� �������, � �� ���-�� �� �����
	this->_controller->DisplayMessage("�������� ��������: \n 1) ��������� \n 2) �������� \n 3) ����� ");

	Action action = this->_controller->GetAction();
	int value = 0;

	switch (action)
	{
	case feed:
		this->_controller->DisplayMessage("������� �������?");
		value = this->_controller->GetValue();
		this->_creature->Eat(value);
		this->_controller->DisplayMessage("����...");
		Sleep(value*500);
		break;
	case play:
		this->_controller->DisplayMessage("������...");
		this->_creature->Play();
		Sleep(value*2000);
		break;
	case sleep:
		this->_controller->DisplayMessage("������� �����?");
		value = this->_controller->GetValue();
		this->_creature->Sleep(value);
		Sleep(value*1000);
		break;
	default: // TODO: ����� � ��-�������� � �������� �������
		return true;
	}

	this->_creature->NextStep();

	return this->_creature->GetHealth() > 0;
}
