/*
   CH-230-A
   a10_p6.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include "Crittter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	//Internally stores as double
	hunger = doubleHunger(newhunger);
}


int Critter::getHunger() {
/*
Takes the internal double value but returns the external int value using 
the defined method
*/
	return  intHunger(hunger);
}

//Adding the new setters for the new properties
void Critter::setAge(int newage){
	age=newage;
}

void Critter::setWeight(double newweight){
	weight=newweight;
}

//Adding the new getters for the new properties
int Critter::getAge(){
	return age;
}

double Critter::getWeight(){
	return weight;
}

//Default constructer (first)
Critter::Critter()
{
	cout<<"The default constructor is called"<<endl;
	name="default_critter";
	height=5;
	boredom=hunger=age=weight=0;
	thirst=hunger;
}

//Second constructor with only one parameter
Critter::Critter(string& newname)
{
	cout<<"The constructor with one parameter (name) is called"<<endl;
	name=newname;
	height=5;
	boredom=hunger=age=weight=0;
	thirst=hunger;
}

//The third constructor with all (or except height) parameter
Critter::Critter(string& newname, int newhunger, int newboredom, 
double newheight)
{
	cout<<"The constructor with all param.(or all except height) is called"<<
	endl;
	name=newname;
	hunger=doubleHunger(newhunger);
	boredom=newboredom;	
	height=newheight;
	thirst=hunger;
	age=weight=0;
}
//The forth constructor from problem 6 that takes all parameters
Critter::Critter(string& newname,int newhunger, int newboredom,
double newheight, double newthirst)
{
	cout<<"The constructor with all param. is called"<<endl;
	name=newname;
	hunger=doubleHunger(newhunger);
	boredom=newboredom;	
	height=newheight;
	thirst=newthirst;
	age=weight=0;
}
//The print method
void Critter::print() {
//Printing hunger with the external int form
	cout << "I am " << name << ". My hunger level is " <<intHunger(hunger) 
	<< ". My boredom is "<<boredom<<" my height level is "<<height<<
	" and my thirst level is "<<thirst<<endl;
}

//The definition for hunger conversion methods

double Critter::doubleHunger(int newhunger)
{
	return newhunger/10.0;
}

int Critter::intHunger(double newhunger)
{
	return newhunger*10;
}