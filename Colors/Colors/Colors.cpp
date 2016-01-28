// Colors.cpp : Defines the entry point for the console application.
//

//Jordan Duckstein

#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <string>
int main()
{
	SetConsoleTitle(TEXT("~=~"));
	using namespace std;
	int COlor = 10;
	int Plus = 100;
	cout << "Speed in milliseconds (Default is 100) - ";
	cin >> Plus;
	while (true)
	{
		Sleep(Plus);
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, COlor++);
		cout << "===============================================================================";

	}
	system("pause>nul");
	return 0;
}

