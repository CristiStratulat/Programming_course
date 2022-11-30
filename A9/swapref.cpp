/*
   CH-230-A
   a9_p7.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <cstring>
using namespace std;

//Using "real" call-by-reference
void swapping(int &a, int &b) // swap ints
{ 
	int aux;
	aux=a;
	a=b;
	b=aux;
} 
//Using "real" call-by-reference
void swapping(float a, float b) // swap floats
{
	float aux;
	aux=a;
	a=b;
	b=aux;
} 
//Using "real" call-by-reference
void swapping(const char *&str1, const char *&str2) // swap char pointers
{ 
	const char *aux=str1;
	str1=str2;
	str2=aux;
} 
//Code taken from problem. Testing the functionality
int main(void)
{
	int a = 7, b = 15;
	float x = 3.5, y = 9.2;
	const char *str1 = "One";
	const char *str2 = "Two";

	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;

	swapping(a, b);
	swapping(x, y);
	swapping(str1, str2);

	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;

	return 0;
}