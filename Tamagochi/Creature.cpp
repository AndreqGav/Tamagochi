#include "stdafx.h"
#include "Creature.h"

Creature::Creature()
{
	this->health = 0;
	this->power = 0;
	this->happiness = 0;
}

Creature::Creature(int healf, int power, int happiness)
{
	this->health = healf;
	this->power = power;
	this->happiness = happiness;
}

Creature::~Creature()
{
}

int Creature::GetHealth()
{
	return this->health;
}

int Creature::GetPower()
{
	return this->power;
}

int Creature::GetHappiness()
{
	return this->happiness;
}
