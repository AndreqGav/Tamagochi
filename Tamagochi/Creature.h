#pragma once
class Creature
{
protected:
	int health;
	int power;
	int happiness;

public:
	Creature();
	Creature(int healf, int power, int happiness);
	virtual ~Creature();

	virtual void Eat(int food) = 0;
	virtual void Sleep(int time) = 0;
	virtual void Play() = 0;
	virtual void NextStep() = 0;

	int GetHealth();
	int GetPower();
	int GetHappiness();

};

