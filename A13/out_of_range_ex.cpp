/*
   CH-230-A
   a13_p6.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
	vector<int> arr(20,8);
	try{
		//Trying to access the 21st element from the vector
		arr.at(20);
	}
	catch(out_of_range& ex) //we catch an out_of_range exception
	{
		//Printing the error
		cerr<<ex.what()<<endl;

	}
	return 0;
}