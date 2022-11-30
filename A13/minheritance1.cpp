/*
   CH-230-A
   a13_p4.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  virtual void print() { cout << x; }
};
 
class B: virtual public A //added virtual
{
public:
  B()  { setX(10); }
};
 
class C: virtual public A  //added virtual
{
public:
  C()  { setX(20); }
};
 
class D: public  B, public  C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
/*
	The error we get is that the call of method print is ambiguous. 
	This error is something specific for problems with multiple inheritance,
	reffered as diamond problem. 
	Class D is derived from class B and class C. Without using polymorphism 
	(virtual functions), what will happen is that one A object will be created 
	as a base class for B and one as a base class for C => D will have at 
	"the root" two A object and calling the print method will make 
	it ambiguous.

	Solution:
	By adding the keyword virtual (public virtual ..) there is going to 
	be created only one object A for both derived classes. So when we call 
	the print method in the class D the ambiguity will dissapear as there 
	is going to be clear what print method we want to use.

*/