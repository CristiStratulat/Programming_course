/*
   CH-230-A
   a13_p2.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#ifndef COMPLEX_H_
#define COMPLEX_H_

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

//Problem A13_p2

	//Overloading the operators +,-,*
	Complex operator +(const Complex&);
	Complex operator -(const Complex&);
	Complex operator *(const Complex&);

	//Overloading the operator = 
	Complex& operator =(const Complex&);

	//Overloading the operators >> and <<
	friend std::istream& operator >> (std::istream& in, Complex&);
	friend std::ostream& operator << (std::ostream& out, const Complex&);

};
#endif