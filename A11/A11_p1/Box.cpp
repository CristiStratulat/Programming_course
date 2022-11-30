/*
   CH-230-A
   a11_p1.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "Box.h"
using namespace std;

//Implementing the constructors
Box::Box()
{
	height=width=depth=0;
}

Box::Box(double newheight, double newwidth, double newdepth)
{
	height=newheight;
	width=newwidth;
	depth=newdepth;
}

Box::Box(const Box& a)
{
	height=a.height;
	width=a.width;
	depth=a.depth;
}

//Implementing the destructor
Box::~Box()
{

}

//Implementing the setters
void Box::setHeight(double newHeight)
{
	height=newHeight;
}
void Box::setWidth(double newWidth)
{
	width=newWidth;
}
void Box::setDepth(double newDepth)
{
	depth=newDepth;
}

//Implementing the getters
double Box::getHeight()
{
	return height;
}
double Box::getWidth()
{
	return width;
}
double Box::getDepth()
{
	return depth;
}
