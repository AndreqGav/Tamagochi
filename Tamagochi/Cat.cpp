#include "stdafx.h"
#include "Cat.h"

Cat::Cat() : Creature()
{

}

Cat::Cat(int health, int power, int happiness) : Creature(health, power, happiness)
{

}


Cat::~Cat()
{
}

void Cat::Eat(int food)
{
	this->health += food*2;
	this->power += food;
	this->happiness += 1;	
}

void Cat::Sleep(int time)
{
	for (int i = 1; i < time; i++)
	{
		NextStep();
	}
}

void Cat::Play()
{
	this->health -= 1;
	this->happiness += 2;
	this->power -= 4;
}

void Cat::NextStep()
{
	// TODO: уменьшение значения характеристик существа
}
