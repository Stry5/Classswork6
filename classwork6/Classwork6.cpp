// Classwork6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string Street, City, State;
	int zip;

	cout << "Please input your street" << endl;
	cin >> Street;
	cout << "Please input your city" << endl;
	cin >> City;
	cout << "Please input your state" << endl;
	cin >> State;
	cout << "Please input your ZIP code" << endl;
	cin >> zip;

	cout << Street << endl << City << ',' << State << ',' << zip << endl;
}

