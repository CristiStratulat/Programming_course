/*
   CH-230-A
   a11_p4.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "Creature.h"
#include <iostream>
#include <cstring>
using namespace std;
//Adding the main function to test the program
int main()
{ 
	string s;
	//We get input from keyboard as long as we don't read quit
	do{
		cin>>s; //read the input from the keyboard
		
		/*
		For each case (wizard, dragon, dwarf) we create an instance 
		dynamically, call the specific method and finally destroy the 
		instance
		*/
		if(s=="wizard")
		{
			Wizard *w = new Wizard();
			w->hover();
			delete w;

		}
		else if (s=="dragon")
		{
			Dragon *dr = new Dragon();
			dr->fire();
			delete dr;
		}
		else if(s=="dwarf")
		{
			Dwarf *d = new Dwarf();
			d->jump();
			delete d;
		}
	
	}while(s!="quit");
    return 0;
} 
