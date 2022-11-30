/*
   CH-230-A
   a9_p6.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int myfirst (int a[],int size)
{
	int i;
	/*
	We loop through the array and when we encounter the first positive and
	even number return it
	*/
	for(i=0;i<size;i++)
		if(a[i]>0&&a[i]%2==0)
			return a[i];
	//If don't find any numbers that satisfies the condition we return -1
	return -1;

}
double myfirst (double a[],int size)
{
	int i;
	double iptr;
	/*
	We loop through the array and when we find the first negative number 
	without a fractional part we return it. modf will return the fractional 
	part. (we use iptr variable just for using the function. it has no 
	real utility)
	*/
	for(i=0;i<size;i++)
		if(a[i]<0&&(modf(a[i],&iptr)==0))
			return a[i];

	//If don't find any numbers that satisfies the condition we return -1.1
	return -1.1;
}
char myfirst(string s)
{
	unsigned int i;
	/*
	We loop through the array. When we find a letter that is not a voewl 
	we return it
	*/
	for(i=0;i<s.size();i++)
		if(isalpha(s[i]))
			if(!(strchr("aeiouAEIOU",s[i])))
				return s[i];

	//If don't find any characters that satisfies the condition we return '0'
	return '0';
}
int main ()
{
	/*
	We compute the size of the arrays as the division between the memory 
	of the entire array and the memory of the first element of the array 
	*/
	//Testing normal cases
	int a[]={1,2,3,4};
	double b[]={-1.12,2.0,-3,0};
	string s="acsm aeio";
	cout<<myfirst(a,sizeof(a)/sizeof(a[0]))<<endl;
	cout<<myfirst(b,sizeof(b)/sizeof(b[0]))<<endl;
	cout<<myfirst(s)<<endl;

	cout<<endl;

	//Testing corner cases
	int c[]={-1,-2,-3,5};
	double d[]={};
	string s1="aei oua";
	cout<<myfirst(c,sizeof(c)/sizeof(c[0]))<<endl;
	cout<<myfirst(d,sizeof(d)/sizeof(d[0]))<<endl;
	cout<<myfirst(s1)<<endl;

	return 0;
}