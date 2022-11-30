/*
   CH-230-A
   a12_p7.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Square.h"

//Definition of constructors for class square
Square::Square(const char *n, double side): Rectangle(n,side,side)
{
	this->side=side;
}

Square::~Square(){
}

//Definition of methods for class square
double Square::calcArea() const {
	std::cout<<"calcArea of Square...";
	return side*side;
}

double Square::calcPerimeter() const{
	std::cout<<"calcPerimeter of Square...";
	return 4*side;
}
