/*
   CH-230-A
   a11_p5.h
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de

	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
	
	//Getter
		string getName() const;
	//Setter
		void setName (const std::string&);
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center

	//Setters
		void setX(double);
		void setY(double);
	
	//Getters
		double getX() const;
		double getY() const;
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
	
	//Setter
		void setEdges(int);
	
	//Getter
		int getEdges() const;
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		double perimeter();
		double area();
	//Setter
		void setRadius (double);

	//Getter
		double getRadius() const;
};

class Rectangle :public RegularPolygon{
	private:
		double width,height;
	public:
		Rectangle();
		Rectangle(const std::string&, double,double,double,double);
		Rectangle(const Rectangle&);
		double perimeter();
		double area();
	//Setters
		void setWidth(double);
		void setHeight(double);

	//Getters
		double getWidth() const;
		double getHeight() const;
};

class Square : public Rectangle{
	private:
		double side;
	public:
		Square();
		Square(const std::string&, double,double,double);
		Square(const Square&);
		double perimeter();
		double area();
	
	//Setter
		void setSide(double);

	//Getter
		double getSide() const;
};
#endif
