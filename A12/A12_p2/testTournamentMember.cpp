/*
   CH-230-A
   a12_p2.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>
#include <string>
using namespace std;

int main ()
{
	char fname[]={"Michael"},lname[]={"Jordan"},date[]="1992-01-05";
	string s="Michigan";
	//Default constructor
	TournamentMember a;
	//Testing the set location method
	a.setLocation(s);
	a.print();
	cout<<endl;
	//Parametric constructor
	TournamentMember b(fname,lname,date,(float)90,(float)210,s);
	//Copy constructor
	TournamentMember c(b);
	cout<<endl;
	//Calling the print method
	a.print();
	cout<<endl;
	b.print();
	cout<<endl;
	c.print();
	return 0;
}