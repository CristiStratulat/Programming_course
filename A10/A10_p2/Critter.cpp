/*
   CH-230-A
   a10_p2.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

//Adapting the method to print the new properties
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger 
	<< ". I am "<<age<<" years old and I weight "<<weight<<" kilograms."
	<< endl;
}

int Critter::getHunger() {
	return hunger;
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