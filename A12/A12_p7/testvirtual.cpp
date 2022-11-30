/*
   CH-230-A
   a12_p7.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/*
Diagram of the classes
BASE CLASS: Area -> Circle -> Ring
				 -> Rectangle -> Square
*/
const int num_obj = 25;
int main() {
	int i;
	string s[]={"RED","BLACK","VIOLET","BLUE"};
	//Initializing the seed
	srand(time(0));
	//Creating 25 objects
	for(i=0;i<24;i++)
	{
		//Picking a random value to initialize a random object
		//Take random values betweeen (5 and 100 for sizes)
		//Print on the screen the perimeter and the area
		if(rand()%4==0)
		{

			Circle c(s[rand()%4].c_str(),rand()%96+5);
			cout<<"Area: "<<c.calcArea()<<endl;
			cout<<"Perimeter: "<<c.calcPerimeter()<<endl;
		}
		else if (rand()%4==1)
		{
			Square sq(s[rand()%4].c_str(),rand()%96+5);
			cout<<"Area: "<<sq.calcArea()<<endl;
			cout<<"Perimeter: "<<sq.calcPerimeter()<<endl;
		}
		else if (rand()%4==2)
		{
			Rectangle r(s[rand()%4].c_str(),rand()%96+5,rand()%96+5);
			cout<<"Area: "<<r.calcArea()<<endl;
			cout<<"Perimeter: "<<r.calcPerimeter()<<endl;
		}
		else if (rand()%4==3)
		{
			Ring ri(s[rand()%4].c_str(),rand()%96+5,rand()%96+5);
			cout<<"Area: "<<ri.calcArea()<<endl;
			cout<<"Perimeter: "<<ri.calcPerimeter()<<endl;
		}
	}
	return 0;
}
