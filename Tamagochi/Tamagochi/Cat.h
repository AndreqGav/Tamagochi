#pragma once
#include "Creature.h"

class Cat : public Creature
{
public:
	Cat();
	Cat::Cat(int health, int power, int happiness);
	~Cat();

	void Eat(int food) override;
	void Sleep(int time) override;
	void Play() override;
	void NextStep() override;

};

