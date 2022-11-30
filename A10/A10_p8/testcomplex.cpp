/*
   CH-230-A
   a10_p8.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"
using namespace std;
int main ()
{
	//Reading the data from keyboard and creating the first instance
	double re,im;
	cout<<"Input the real and imaginary part for the first number"<<endl;
	cin>>re>>im;
	Complex c1(re,im);

	//Reading the data from keyboard and creating the second instance
	cout<<"Input the real and imaginary part for the second number"<<endl;
	cin>>re>>im;
	Complex c2(re,im);

	//Conjugation of the first number
	Complex c3;
	c3=c1.conjugate();
	cout<<"The conjugated number is"<<endl;
	c3.print();

	//Sum of two complex numbers
	c3=c1.add(c2);
	cout<<"The sum of two complex numbers"<<endl;
	c3.print();

	//Difference between two complex numbers
	c3=c1.diff(c2);
	cout<<"The difference of two complex numbers"<<endl;
	c3.print();

	//Multiplication of two complex numbers
	c3=c1.multiplication(c2);
	cout<<"The multiplication of two complex numbers"<<endl;
	c3.print();

	return 0;
}