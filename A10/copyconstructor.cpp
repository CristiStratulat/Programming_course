/*
   CH-230-A
   a10_p7.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);

	//Destructor
	~NaiveString();
	
	void update(char, char);
	void print();
};

//Destructor, dealocating memory of the array
NaiveString::~NaiveString()
{
	cout<<"Destructor called"<<endl;
	delete []str;
}

NaiveString::NaiveString(const char* t) {
	cout<<"Constructor called"<<endl;
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/


NaiveString::NaiveString(const NaiveString& src) {
	cout<<"Copy constructor called"<<endl;
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

//Implementing funcByref 
void funcByref(NaiveString& s)
{
	cout<<"funcByref() is being called"<<endl;
	s.update('B','C');
	s.print();
}


int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");

	//Creating the b instance from the a using the copy constructor
	NaiveString b(a);

	//Printing the value before and after calling the method
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();
	/*
	As it is a call by value the value from the variable a is not changing.
	In the method we see the changes but the actual value does not cahnge.
	*/

	//Printing the value before and after
	b.print();
	cout<<"About to acll funcByref()"<<endl;
	funcByref(b);
	b.print();
	//As it is a call by reference the value of b will change as well

	return 0;
}
