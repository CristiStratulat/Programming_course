/*
   CH-230-A
   a10_p4.cpp
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
    hunger = newhunger;
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
 
//Default constructer (first)
Critter::Critter()
{
    cout<<"The default constructor is called"<<endl;
    name="default_critter";
    height=5;
    boredom=hunger=age=weight=0;
}
 
//Second constructor with only one parameter
Critter::Critter(string& newname)
{
    cout<<"The constructor with one parameter (name) is called"<<endl;
    name=newname;
    height=5;
    boredom=hunger=age=weight=0;
}
 
//The third constructor with all (or except height) parameter
Critter::Critter(string& newname, int newhunger, int newboredom, 
double newheight)
{
    cout<<"The constructor with all param.(or all except height) is called"<<
    endl;
    name=newname;
    hunger=newhunger;
    boredom=newboredom;    
    height=newheight;
    age=weight=0;
}
 
//The print method
void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << hunger 
    << ". My boredom is "<<boredom<<" my height level is "<<height<<endl;
}