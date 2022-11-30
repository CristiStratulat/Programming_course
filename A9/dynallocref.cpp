/*
   CH-230-A
   a9_p8.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <climits>
using namespace std;

void substract_max(int arr[], int n)
{
	int i,Max=INT_MIN;
	//Looping to find the maximum value of the array
	for(i=0;i<n;i++)
		if(arr[i]>Max)
			Max=arr[i];
	//Substracting the maximum value from all elements of the array
	for(i=0;i<n;i++)
		arr[i]=arr[i]-Max;
	
}
//releasing memory allocated for the array
void deallocate (int a[])
{
	delete[] a;
}

int main ()
{
	//Reading the variables and allocating memory for the array
	int n, *arr,i;
	cin>>n;
	arr = new int [n];
	//Check for memory allocation errors
	if(arr==NULL)
		{
			cout<<"Memory allocation problem!"<<endl;
			exit(0);
		}
	//Reading the array and calling the required function
	for(i=0;i<n;i++)
		cin>>arr[i];
	substract_max(arr,n);

	//Printing the result
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

	//free memory of the array
	deallocate(arr);

	return 0;
}