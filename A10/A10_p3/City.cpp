/*
   CH-230-A
   a10_p3.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "City.h"
#include <iostream>
using namespace std;

//Implementing the setters
void City::setName(string& newname)
{
	name=newname;
}
void City::setInh(int new_num_inh)
{
	num_inh=new_num_inh;
}
void City::setMayorName(string& new_mayor_name)
{
	mayor_name=new_mayor_name;
}
void City::setArea (float newArea)
{
	area=newArea;
}

//Implementing the getters
string City::getName()
{
	return name;
}
int City::getInh()
{
	return num_inh;
}
string City::getMayor()
{
	return mayor_name;
}
float City::getArea()
{
	return area;
}
