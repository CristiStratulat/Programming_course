/*
   CH-230-A
   a11_p5.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "Shapes.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

//Code from the file downloaded
  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  r.printName();
  c.printName();

cout<<'\n';
//Creating an instance to test for circle
  Circle c1("Test circle",0,0,3);
  cout<<"The perimeter of the circle is"<<endl;
  cout<<c1.perimeter()<<endl;
  cout<<"The area of the circle is"<<endl;
  cout<<c1.area()<<endl;

//Creating an instance to test for rectangle
  Rectangle r1("Test rectangle",0,0,2,3);
  cout<<"The perimeter of the rectangle is"<<endl;
  cout<<r1.perimeter()<<endl;
  cout<<"The area of the rectangle is"<<endl;
  cout<<r1.area()<<endl;

//Creating an instance to test for square
  Square s("Test square",0,0,2);
  cout<<"The perimeter of the square is"<<endl;
  cout<<s.perimeter()<<endl;
  cout<<"The area of the square is"<<endl;
  cout<<s.area()<<endl;

}
