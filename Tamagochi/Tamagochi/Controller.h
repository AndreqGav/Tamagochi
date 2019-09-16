#pragma once

#include <iostream>

using namespace std;

class Controller
{
public:
	Controller();
	virtual ~Controller();

	virtual void DisplayMessage(string message) = 0;
	virtual int GetAction() = 0;
	virtual int GetValue() = 0;
};

