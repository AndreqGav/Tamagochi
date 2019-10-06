#include <limits>
#include <iostream>
#include "stdafx.h"
#include <windows.h>
#include "ConsoleController.h"

void ConsoleController::DisplayMessage(string message)
{
	system("cls");
	cout << endl << message << endl;
}

Action ConsoleController::GetAction()
{

	int num_action = 0;
	cin >> num_action;

	if (cin.fail())
	{
		DisplayError("Неверные данные");
	}
	cin.clear(); 
	cin.ignore(INT_MAX, '\n');

	Action action = (Action)num_action;

	return action;
}

int ConsoleController::GetValue()
{
	int value = 0;
	cin >> value;

	if (cin.fail())
	{
		DisplayError("Неверные данные");
	}
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return value;
}

void ConsoleController::DisplayError(string error)
{
	cerr << endl << error << endl;
	Sleep(1000);
}

