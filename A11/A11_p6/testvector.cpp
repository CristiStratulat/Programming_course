/*
   CH-230-A
   a11_p6.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "Vector.h"
#include <iostream>
 
using namespace std;

int main ()
{
	double *aux = new double[5]{1,2,3,4,5};
	double *aux1= new double[5]{0,1,2,3,4};
	//initializing the first intances (constructor no parameters)
	Vector v1;
	//initializing the second instances (constructor with parameters)
	Vector v2(5,aux);
	//third instances (copy of the second instance)
	Vector v3(v2);
	//forht instance (constructor with parameters)
	Vector v4(5,aux1);

	cout<<"The norm of the second instance"<<endl;
	cout<<v2.norm()<<endl;
	cout<<"The scalar between the second and the forth instance"<<endl;
	cout<<v2.scalar(v4)<<endl;
	cout<<"Adding the second and the forth instance"<<endl;
	(v2.add(v4)).printVector();
	cout<<"Computing the difference between the second and the forth instance"
	<<endl;
	(v2.diff(v4)).printVector();

	return 0;
}