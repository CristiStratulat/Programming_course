/*
   CH-230-A
   a10_p2.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"
using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger,age;
	double weight;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	//Testing the new properties, getters and setters
	cout<< "Age: ";
	cin >>age;
	c.setAge(age);
	cout<< "Weight: ";
	cin>>weight;
	c.setWeight(weight);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}
