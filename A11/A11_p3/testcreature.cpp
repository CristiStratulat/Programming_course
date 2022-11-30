/*
   CH-230-A
   a11_p3.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "Creature.h"
#include <iostream>
using namespace std;
//Adding the main function to test the program
int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

	//Creating one instance of wizard
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

	//Creating one instance of dwarf
	cout<<"\nCreating a Dwarf.\n";
	Dwarf d;
	d.run();
	d.jump(); //Specific method

	//Creating one instance of dragon
	cout<<"\nCreating a Dragon\n";
	Dragon dr;
	dr.run();
	dr.fire(); //Specific method

	cout<<'\n';

    return 0;
} 
