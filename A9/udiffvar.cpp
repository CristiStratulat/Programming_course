/*
   CH-230-A
   a9_p2.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
using namespace std;
int main ()
{
	//Reading an integer, a double and a string from the keyboard
	int n,i;
	double x;
	string s;
	cin>>n>>x>>s;
	//Printing on screen the values as required
	for(i=1;i<=n;i++)
		cout<<s<<":"<<x<<endl;
	return 0;
}