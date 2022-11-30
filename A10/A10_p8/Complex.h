/*
   CH-230-A
   a10_p8.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/

class Complex {
private: 
	double re,im;
public:
	//Constructors
	Complex();
	Complex(double, double);
	Complex(const Complex&);

	//Destructor
	~Complex();

	//Setters
	void setRe(double);
	void setIm(double);

	//Getters
	double getRe();
	double getIm();

	//Printing method
	void print();
	Complex conjugate(); //conjugate
	Complex add(Complex); //sum
	Complex diff(Complex); //difference
	Complex multiplication(Complex); //multiplication

};