#pragma once
#include "Controller.h"
#include <iostream>

class ConsoleController : public Controller
{
	void DisplayMessage(string message) override;
	Action GetAction() override;
	int GetValue() override;
	void DisplayError(string error = "Ошибка!");
};

