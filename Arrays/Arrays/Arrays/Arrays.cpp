// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	char Char[5];
	Char[0] = 'f';
	Char[1] = 'g';
	Char[2] = 'h';
	Char[3] = 'i';
	Char[4] = 'j';

	for (int i = 0; i < 5; i++)
	{
		cout << "Character " << Char[i] << endl;
	}

	cout << endl;

	float Floats[3];
	Floats[0] = 4.6f;
	Floats[1] = 7.1f;
	Floats[2] = 5.5f;

	for (int i = 0; i < 3; i++)
	{
		cout << "Float " << Floats[i] << endl;
	}

	cout << endl;

	string Toga[3];
	Toga[0] = "TOGA";
	Toga[1] = "is";
	Toga[2] = "awesome!";

	for (int i = 0; i < 3; i++)
	{
		cout << Toga[i] << endl;
	}

	cout << endl;

	bool State[4];
	State[0] = true;
	State[1] = false;
	State[2] = false;
	State[3] = true;

	for (int i = 0; i < 4; i++)
	{
		cout << "State " << State[i] << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
