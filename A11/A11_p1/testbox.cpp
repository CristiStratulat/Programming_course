/*
   CH-230-A
   a11_p1.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include "Box.h"
using namespace std;
int main ()
{
	//Required variables
	Box *list;
	int n,i;
	double height,width,depth,vol;

	//Read the number of boxes
	cout<<"Enter the number of boxes:"<<endl;
	cin>>n;

	//Dynamically create an array of 2*n boxes
	list = new Box[2*n];

	//Reading the properties for n boxes and calling the constructors
	for(i=1;i<=n;i++)
		{
			cout<<"Enter the height, width and depth of the current box"<<
			endl;
			cin>>height>>width>>depth;
			list[i-1]=Box(height,width,depth);
			//Add the copies on the reminder n position in the same order
			list[n+i-1]=Box(list[i-1]);
		}
	//Looping through all boxes and printing the volume
	for(i=0;i<2*n;i++)
	{
		vol=list[i].getDepth()*list[i].getHeight()*list[i].getWidth();
		cout<<"The volume of the box on the position "<<i<<" is: "
		<<vol<<"."<<endl;
	}

	//Freeing the memory (the distructor is implicitly called)
	delete []list;

	return 0;
}