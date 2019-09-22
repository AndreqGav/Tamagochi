#include "stdafx.h"
#include "Creature.h"

//TODO: добавить границы для характеристик

Creature::Creature()
{
	this->health = 1;
	this->power = 1;
	this->happiness = 1;
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
