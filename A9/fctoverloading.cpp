/*
   CH-230-A
   a9_p4.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
using namespace std;

//Function with two integers as parameters
int mycount (int a, int b)
{
	return b-a;
}
//Overloading the function with a char and a string as parameter
int mycount (char a, string s)
{
	unsigned int i,count=0;
	for(i=0;i<s.size();i++)
		if(s[i]==a)
			count++;
	return count;
	
}
int main ()
{
	//Calling the function hence demonstrating the behaviour
	cout<<"Running mycount function with two integers:"<<endl;
	cout<<mycount(2,3)<<endl;
	cout<<"Running mycount function with a character and a string "<<endl;
	cout<<mycount('z', "this is a string")<<endl;


	cout<<"Running mycount function with two integers:"<<endl;
	cout<<mycount(0,0)<<endl;
	cout<<"Running mycount function with a character and a string "<<endl;
	cout<<mycount('h', "hh hh hh")<<endl;

	cout<<"Running mycount function with two integers:"<<endl;
	cout<<mycount(100,3)<<endl;
	cout<<"Running mycount function with a character and a string "<<endl;
	cout<<mycount('h', "ha hb hc")<<endl;
	
	return 0;
}	