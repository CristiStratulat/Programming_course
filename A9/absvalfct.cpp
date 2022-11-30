/*
   CH-230-A
   a9_p3.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
using namespace std;
//Float function that returns the absolute value of a float number
float absolute_val(float x)
{
//We use the definition of abs value function
	if(x<0)
		return -x;
	else
		return x;
}
int main ()
{
	//Reading a float number and printing the absolute value 
	float a;
	cin>>a;
	cout<<absolute_val(a)<<endl;
	return 0;
}