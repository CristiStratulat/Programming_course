/*
   CH-230-A
   a13_p5.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
	public: 				
		D(): A(10),B(),C(){}	
	//Constructor with explicit calls   
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/*
	The error we would get in this case is that it doens't exist 
	a default contructor in class A (A()) when the compiler tries
	to implicitly create the default constructor for D.
	This happens because whenever we want to use virtual inheritance 
	we need to specify in the child class (D class in our case) all the 
	constructor calls that should be made for the respective class.

	Solution: 
	We create the D() constructor where we explicitly call all the 
	constructors that are needed. This way everything will be clear
	and we won't relay on implicit generation of constructors.
*/