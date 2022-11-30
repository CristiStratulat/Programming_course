/*
   CH-230-A
   a12_p6.cpp
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
const int num_obj = 6;
int main() {
	/*
	(1) Declaring a pointer array. The pointers stored in the array will point
	to instances of area class or instances derived from area. This is 
	possible because of the Upcasting property
	*/
	Area *list[num_obj];
	/*
	(2)Declaring an index variable that will help us loop through the 
	elements of the array previously declared. With the help of index we will 
	be able to acces different instances of the classes store in the list 
	array
	*/
	int index = 0;
	double sum_area = 0.0;	
	/*
	(3) Variable sum_area will store the sum of all areas that are going 
	to be computed in the problem
	*/
	double sum_perimeter=0.0;
	cout << "Creating Ring: ";
	/*
	(4) We create an instance of the class Ring (derived from Circle)
	(Circle derived from Area) by using a parametric constructor
	*/
	Ring blue_ring("BLUE", 5, 2);
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
/*
(5) We store in the pointer array the address of different instances. In 
this case we store the address of an instace of class Ring
*/
	list[0] = &blue_ring;
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	//(7) We loop through all elements stored in the pointer array
	while (index < num_obj) {					
		(list[index])->getColor();
		double perimeter =list[index++]->calcPerimeter();				
		double area = list[index++]->calcArea();
	/*
	(8) we compute the area of the element on position index and store it into
	a variable
	*/
		sum_area += area;
		sum_perimeter+=perimeter;

	}
	/* 
	(9) Printing the sum of all areas of elements stored in the array
	*/
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	
	cout<<"\n The total perimeter is "
			<<sum_perimeter <<" units "<<endl;
	

//Declaring the object square and test the class functionality
	cout<<"Creating Square"<<endl;
	Square purple_square("Purple",5);

	cout<<"Area of Square: "<<purple_square.calcArea()<<endl;
	cout<<"Perimeter of Square: "<<purple_square.calcPerimeter()<<endl;
	return 0;
}
