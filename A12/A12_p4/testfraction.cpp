/*
   CH-230-A
   a12_p4.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a;
	Fraction b;
	cout<<"Enter first the denominator and then the numerator"<<endl;
	//We used the overloaded operator >> for reading
	cin>>a;
	cin>>b;

	//Replaced the print method with the overloaded << operator
	//Priting the multiplication
	cout<<a*b;
	//Printing the quotient
	cout<<a/b;

	return 0;
}
