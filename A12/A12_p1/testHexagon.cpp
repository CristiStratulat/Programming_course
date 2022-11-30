/*
   CH-230-A
   a12_p1.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
using namespace std;
int main ()
{
	//Create a blue hexagon of size 9
	Hexagon h1("blue hexagon",0,0,3,"blue");

	//Create a green hexagon of size 15
	Hexagon h2("green hexagon",0,0,15,"green");

	//Create a copy for the second hexagon
	Hexagon h3(h2);

	//Perimeter
	cout<<"Computing the permiter of all hexagons"<<endl;
	cout<<"h1: "<<h1.perimeter()<<endl;
	cout<<"h2: "<<h2.perimeter()<<endl;
	cout<<"h3: "<<h3.perimeter()<<endl;
	
	//Area
	cout<<"Computing the area of all hexagons"<<endl;
	cout<<"h1: "<<h1.area()<<endl;
	cout<<"h2: "<<h2.area()<<endl;
	cout<<"h3: "<<h3.area()<<endl;
	
	return 0;
}