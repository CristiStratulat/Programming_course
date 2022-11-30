/*
   CH-230-A
   a11_p1.h
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
class Box
{
//Required properties
private:
	double height;
	double width;
	double depth;

public:
//Required constructors
	Box();
	Box(double,double,double);
	Box(const Box&); //copy constructor

//Destructor
	~Box();

//Setters
	void setHeight(double);
	void setWidth(double);
	void setDepth(double);

//Getters
	double getHeight();
	double getWidth();
	double getDepth();
};