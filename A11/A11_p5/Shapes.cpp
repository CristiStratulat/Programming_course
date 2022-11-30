/*
   CH-230-A
   a11_p5.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

//Implementation for Shape
Shape::Shape(const string& n) : name(n) {
}
Shape::Shape(){
	name=""; //default
}
//copy constructor
Shape::Shape(const Shape& copy){
	name=copy.name;
}
void Shape::printName() const {
	cout << name << endl;
}

//Setter and getter
void Shape::setName (const string& nname){
	name=nname;
}

string Shape::getName() const {
	return name;
}



//Implementation for Centered Shape
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n){
	x = nx;
	y = ny;
}
CenteredShape::CenteredShape(){
	x=0; //default
	y=0; //default
}
//copy constructor
CenteredShape::CenteredShape(const CenteredShape& copy):Shape(copy.getName()){
	x=copy.x;
	y=copy.y;
}

//Setters and getters
void CenteredShape::setX(double nx){
	x=nx;
}
void CenteredShape::setY(double ny){
	y=ny;
}

double CenteredShape::getX () const{
	return x;
}
double CenteredShape::getY() const{
	return y;
}



//Implementation for RegularPolygon
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(){
	EdgesNumber=0; //default
}
//Copy constructor
RegularPolygon::RegularPolygon(const RegularPolygon& copy):CenteredShape(
copy.getName(),copy.getX(),copy.getY()){
	EdgesNumber=copy.EdgesNumber;
}
//Setter and getter
void RegularPolygon::setEdges(int edges){
	EdgesNumber=edges;
}
int RegularPolygon::getEdges()const{
	return EdgesNumber;
}



//Implementation for Circle
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}
Circle::Circle(){
	Radius=0; //default
}
//Copy constructor
Circle::Circle(const Circle& copy): CenteredShape(copy.getName(),
copy.getX(),copy.getY()){
	Radius=copy.Radius;
}
//Setter and getter
void Circle::setRadius(double nradius){
	Radius=nradius;
}
double Circle::getRadius() const{
	return Radius;
}
//Required methods
double Circle::perimeter(){
	return 2*M_PI*Radius;
}
double Circle::area(){
	return M_PI*Radius*Radius;
}


//Implementation for Rectangle
Rectangle::Rectangle(){
	width=0; //default
	height=0; //default
}
Rectangle::Rectangle(const string& n, double nx,double ny,double nwidth,
double nheight): RegularPolygon(n,nx,ny,4){
	width=nwidth;
	height=nheight;
}
//Copy constructor
Rectangle::Rectangle(const Rectangle& copy): RegularPolygon(copy.getName(),
copy.getX(),copy.getY(),copy.getEdges()){
	width=copy.width;
	height=copy.height;
}
//Setters and getters
void Rectangle::setWidth(double nwidth){
	width=nwidth;
}
void Rectangle::setHeight(double nheight){
	height=nheight;
}

double Rectangle::getWidth() const{
	return width;
}
double Rectangle::getHeight() const{
	return height;
}
//Required methods
double Rectangle::perimeter(){
	return 2*width+2*height;
}
double Rectangle::area(){
	return width*height;
}



//Implementation for Square
Square::Square(){
	side=0; //default
}
Square::Square(const string& n,double nx,double ny,
double nside) : Rectangle(n,nx,ny,nside,nside){
	side=nside;
}
//Copy constructor 
Square::Square(const Square& copy): Rectangle(copy.getName(),copy.getX(),
copy.getY(),copy.getWidth(),copy.getHeight())
{
	side=copy.side;
}
//Setter and getter
void Square::setSide(double nside){
	side=nside;
}

double Square::getSide() const{
	return side;
}
//Required methods
double Square::perimeter(){
	return 4*side;
}
double Square::area(){
	return side*side;
}

