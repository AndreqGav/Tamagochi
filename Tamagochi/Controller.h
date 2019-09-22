#pragma once

#include <string>
#include "Action.h"

using namespace std;


using namespace std;

class Controller
{
public:

	virtual void DisplayMessage(string message) = 0;
	virtual Action GetAction() = 0;
	virtual int GetValue() = 0;
};

