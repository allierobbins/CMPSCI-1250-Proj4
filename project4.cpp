/*
 * project4.cpp
 *
 *  Created on: Sep 22, 2016
 *      Author: Alexandria
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//variables
	string name;
	string petName;
	int weight;
	char petType;
	int cost;

	//get the info
	cout << "Please enter your full name: ";
	getline(cin, name);
	cout << "Please enter your pet's name: ";
	getline(cin, petName);
	cout << "Please enter your pet's weight in lbs: ";
	cin >> weight;
	cout << "Cat \t C" << endl;
	cout << "Dog \t D" << endl;
	cout << "Other \t O" << endl;
	cout << "Please enter what type of pet you have (C, D, O): ";
	cin >> petType;

	//figure the cost
	switch(petType)
	{
	case 'C':
		if (weight <= 0)
			cout << "You have entered an invalid weight." << endl;
		else if (weight > 0 && weight <=4)
			cost = 30;
		else if (weight >= 5 && weight <=9)
			cost = 60;
		else if (weight >= 10 && weight <=50)
			cost = 90;
		else
			cout << "We deny service to any cats over 50 lbs." << endl;
		break;

	case 'D':
		if (weight <= 0)
			cout << "You have entered an invalid weight." << endl;
		else if (weight > 0 && weight <= 29)
			cost = 45;
		else if (weight >= 30 && weight <= 59)
			cost = 90;
		else if (weight >= 60 && weight <= 240)
			cost = 135;
		else
			cout << "We deny service to any dogs over 240 lbs." << endl;
		break;

	case 'O':
		if (weight <= 0)
			cout << "You have entered an invalid weight." << endl;
		else if (weight > 0 && weight <=199)
			cost = 15;
		else if (weight >= 100 && weight <= 499)
			cost = 100;
		else if (weight >= 500 && weight <= 6000)
			cost = 200;
		else
			cout << "We deny service to any pets over 6000 lbs." << endl;
		break;

	default:
		cout << "You have not entered C, D, or O." << endl;
	}


	//final statement
	cout << "Thank you, " << name << ", it will cost $" << cost << " for a vet visit for your pet " << petName << "." << endl;
	return 0;
}




