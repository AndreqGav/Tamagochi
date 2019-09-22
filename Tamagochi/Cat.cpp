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
	this->health += time / 2;
	this->power += time * 2;
	this->happiness += time;
}

void Cat::Play()
{
	this->happiness += 2;
	this->power -= 4;
}

void Cat::NextStep()
{
	// TODO: уменьшение значения характеристик существа
}
