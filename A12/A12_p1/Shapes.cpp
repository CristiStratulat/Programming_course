/*
   CH-230-A
   a12_p1.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>
using namespace std; 

Shape::Shape(const string& n) : name(n) {
}
//Copy constructor implementation
Shape::Shape(const Shape& copy): name(copy.name){
}
void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
//Copy constructor implementation
CenteredShape::CenteredShape(const CenteredShape& copy):Shape(copy){
	x=copy.x;
	y=copy.y;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}
//Copy constructor implementation
RegularPolygon:: RegularPolygon(const RegularPolygon& copy): 
CenteredShape(copy){
	EdgesNumber=copy.EdgesNumber;
}
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//Hexagon constructors
Hexagon::Hexagon(const string& n,double nx, double ny,double side,
const string& color):RegularPolygon(n,nx,ny,6){
	this->side=side;
	this->color=color;
}
//Copy constructor implementation
Hexagon::Hexagon(const Hexagon& copy):RegularPolygon(copy){
	side=copy.side;
	color=copy.color;
}

//Hexagon destructor
Hexagon::~Hexagon(){
}

//Getters
double Hexagon::getSide() const {
	return side;
}
string Hexagon::getColor() const{
	return color;
}

//Setters
void Hexagon::setSide(double side){
	this->side=side;
}
void Hexagon::setColor(const string& color){
	this->color=color;
}

//Method to compute the perimeter
double Hexagon::perimeter() const{
	return side*6;
}

//Method to compute the area
double Hexagon::area() const{
	return ((3*sqrt(3))/2)*(side*side);
}