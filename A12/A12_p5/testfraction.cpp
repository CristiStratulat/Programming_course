/*
   CH-230-A
   a12_p5.cpp
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

	//Using the overloaded < > operators 
	if(a>b)
		cout<<"The larger fraction is: "<<a;
	else if(a<b)
		cout<<"The larger fraction is: "<<b;
	
	//Declaring the other objects where we will store the sum and diff
	Fraction sum, diff;
	//Storing the sum
	sum=a+b;
	//Storing the diff
	diff=a-b;

	//Overloading << operator
	cout<<sum;
	cout<<diff;

	return 0;
}
