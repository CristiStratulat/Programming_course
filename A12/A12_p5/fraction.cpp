/*
   CH-230-A
   a12_p5.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;
	int r;
	//To support negative value
	a=abs(a);
	b=abs(b);

	//Euclid's algorithm
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	tmp_gcd=a;
	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

//overloading the << operator 
ostream& operator <<(ostream& out,const Fraction& a)
{
	out<<a.num<<"/"<<a.den<<endl;
	return out;
}

//overloading the >> operator
istream& operator >> (istream& in, Fraction& a)
{
	int tmp_gcd;
	in>>a.den>>a.num;
	//as long as we don't have valid input we re-enter values
	while(a.den==0) 
		{
			cout<<"Invalid denominator, please re enter values"<<endl;
			in>>a.den>>a.num;
		}
	tmp_gcd= a.gcd(a.num,a.den);
	a.num=a.num/tmp_gcd;
	a.den=a.den/tmp_gcd;
	return in;
}

//overloading the * operator
Fraction Fraction::operator*(const Fraction& a)
{
	Fraction result(num*a.num,den*a.den);

	//Simplify the result
	int tmp_gcd=gcd(result.num,result.den);
	result.den=result.den/tmp_gcd;
	result.num=result.num/tmp_gcd;
	//In case both negative we can simplfy the - sign
	if(result.num<0&&result.den<0)
		{
			result.num=abs(result.num);
			result.den=abs(result.den);
		}
	return result;
}

//overloading the / operator
Fraction Fraction::operator / (const Fraction& a)
{
	Fraction result;
//Division is the multiplication of a fraction and the inverse of the other
	result.num=num* a.den;
	result.den=den* a.num;

	if(result.den!=0)
	{
	//simplify the result
	int tmp_gcd = gcd(result.num,result.den);
	result.num=result.num/tmp_gcd;
	result.den=result.den/tmp_gcd;

	//In case both negative we can simplfy the - sign
	if(result.num<0&&result.den<0)
		{
			result.num=abs(result.num);
			result.den=abs(result.den);
		}
	return result;
	}
	else //Check for division by 0 error
	{
		cout<<"Error. Dividing the fraction will result in division by 0"<<
		endl;
		exit(1);
	}
}
//Overloading the + operator
Fraction Fraction::operator+ (const Fraction& a)
{
	Fraction result;
	result.num = num*lcm(den,a.den)/den+a.num*lcm(den,a.den)/a.den;
	result.den=lcm(den,a.den);

	//simplify the result
	int tmp_gcd = gcd(result.num,result.den);
	result.num=result.num/tmp_gcd;
	result.den=result.den/tmp_gcd;

	return result;
}

//Overloading the - operator
Fraction Fraction::operator- (const Fraction& a)
{
	Fraction result;
	result.num=num*lcm(den,a.den)/den-a.num*lcm(den,a.den)/a.den;
	result.den=lcm(den,a.den);

	//simplify the result
	int tmp_gcd = gcd(result.num,result.den);
	result.num=result.num/tmp_gcd;
	result.den=result.den/tmp_gcd;

	return result;
}

//Overloading < operator (using cross multiplying rule)
bool Fraction::operator < (const Fraction& a)
{
	if (num*a.den<den*a.num)
		return 1;
	else
		return 0;
}

//Overloading > operator (using cross multiplying rule)
bool Fraction::operator > (const Fraction& a)
{
	if (num*a.den>den*a.num)
		return 1;
	else
		return 0;
}

//Overloading the = operator
Fraction& Fraction::operator=(const Fraction& a)
{
	this->num= a.num;
	this->den= a.den;
	return *this;
}