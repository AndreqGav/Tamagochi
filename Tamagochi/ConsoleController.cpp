#include "stdafx.h"
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

	Action action = (Action)num_action;

	return action;
}

int ConsoleController::GetValue()
{
	int value = 0;
	cin >> value;

	return value;
}
