/*
   CH-230-A
   a12_p6.h
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
//Definition of the header file for class square
#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"
class Square :public Rectangle{
	public:
		Square(const char *n,double side);
		~Square();
		double calcArea() const;
		double calcPerimeter () const;
	private:
		double side;
};
#endif