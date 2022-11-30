/*
   CH-230-A
   a13_p2.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include "Complex.h"
using namespace std;
int main ()
{
	//Opening the first input file
	ifstream fin ("in1.txt");
	//Checking for null pointer
	if(!fin.good())
		{
			cerr<<"Error opening input file"<<endl; 
			exit(2);
		}

	//Opening the second input file
	ifstream fin1("in2.txt");
	//Checking for null pointer
	if(!fin1.good())
		{
			cerr<<"Error opening input file"<<endl; 
			exit(2);
		}
	//Opening the output file
	ofstream fout("output.txt");
	//Checking for null pointer
	if(!fout.good())
		{
			cerr<<"Error opening output file"<<endl;
        	exit(1);
		}
	
	Complex a,b,sum,diff,prod;

	//Reading the complex numbers from the input files
	fin>>a;
	fin1>>b;

	//Computing the sum difference and product
	sum=a+b;
	diff=a-b;
	prod=a*b;

	//Printing the result in the output file
	fout<<"The sum is:"<<'\n'<<sum<<'\n';
	fout<<"The difference is:"<<'\n'<<diff<<'\n';
	fout<<"The product is:"<<'\n'<<prod<<'\n';

	//Printing thr result on screen
	cout<<"The sum is:"<<'\n'<<sum<<'\n';
	cout<<"The difference is:"<<'\n'<<diff<<'\n';
	cout<<"The product is:"<<'\n'<<prod<<'\n';

	//Closing all files
	fin.close();
	fin1.close();
	fout.close();
	return 0;
}