/*
   CH-230-A
   a10_p4.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Crittter.h"
using namespace std;
 
int main(int argc, char** argv)
{
	//Initializing the instances and testing different constructors

    string s="random";
    Critter c;
    cout << "You have created:" << endl;
    c.print();
 
    Critter c1(s);
    cout << "You have created:" << endl;
    c1.print();
 
    s="random1";
    Critter c2(s,2,7);
    cout << "You have created:" << endl;
    c2.print();
 
    s="random2";
    Critter c3(s,2,7,5);
    cout << "You have created:" << endl;
    c3.print();
    
     return 0;
}