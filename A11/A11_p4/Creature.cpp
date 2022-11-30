/*
   CH-230-A
   a11_p3.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "Creature.h"
#include <iostream>
using namespace std;

//Implementation for class Creature
//Adding cout to print on screen a text when the function is called

Creature::Creature(): distance(10){
	cout<<"Creature constructor called"<<endl;
}    

Creature::~Creature(){
	cout<<"Creature destructor called"<<endl;
}
void Creature::run() const
{ 
	cout<<"Run method called"<<endl;
    cout << "running " << distance << " meters!\n";
}  

//Implementation for class Wizard

Wizard::Wizard() : distFactor(3){
	cout<<"Wizard constructor called"<<endl;
}  

Wizard::~Wizard(){
	cout<<"Wizard destructor called"<<endl;
}

void Wizard::hover() const
{
	cout<<"Hover method called"<<endl;
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//Implementation for class Dwarf

Dwarf::Dwarf(): height(20){
	cout<<"Dwarf constructor called"<<endl;
}

Dwarf::~Dwarf(){
	cout<<"Dwarf destructor called"<<endl;
}

void Dwarf::jump() const {
	cout<<"Jump method called:"<<endl;
	cout<<"The dwarf can jump at to a height of "<<height+5<<"cm"<<endl;
}

//Implementation for class Dragon

Dragon::Dragon():power(10){
	cout<<"Dragon constructor called"<<endl;
}

Dragon::~Dragon(){
	cout<<"Destructor called"<<endl;
}

void Dragon::fire() const
{
	cout<<"Fire method called"<<endl;
	cout<<"The dragon spits fire with a power of "<<power<<endl;
}
