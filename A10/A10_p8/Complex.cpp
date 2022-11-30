/*
   CH-230-A
   a10_p8.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"
#include <cmath>
using namespace std;

//Writing the definition for all the required constructors
Complex::Complex()
{
	re=0;
	im=0;
}

Complex::Complex(double newRe, double newIm)
{
	re=newRe;
	im=newIm;
}

Complex::Complex(const Complex& z)
{
	re=z.re;
	im=z.im;
}

//Destructor
Complex::~Complex()
{}

//Setters
void Complex::setRe(double newRe)
{
	re=newRe;
}
void Complex::setIm(double newIm)
{
	im=newIm;
}

//Getters
double Complex::getRe()
{
	return re;
}
double Complex::getIm()
{
	return im;
}

//Printing method
void Complex::print()
{
	cout<<noshowpos<<re<<showpos<<im<<"i"<<endl;
}

//Other required functions
//Conjugation
Complex Complex::conjugate()
{
	Complex conj;
	conj.re=re;
	conj.im=im*(-1);
	return conj;
}

//Addition
Complex Complex::add(Complex c)
{
	Complex sum;
	sum.re=re+c.re;
	sum.im=im+c.im;
	return sum;
}

//Difference
Complex Complex::diff(Complex c)
{
	Complex diff;
	diff.re=re-c.re;
	diff.im=im-c.im;
	return diff;
}

//Multiplication
Complex Complex::multiplication(Complex c)
{
	Complex result;
	result.re=(re*c.re - im*c.im);
	result.im=(re*c.im + im*c.re);
	return result;
}