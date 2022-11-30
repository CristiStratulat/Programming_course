/*
   CH-230-A
   a13_p8.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
using namespace std;
//Definition of the class motor that throws an exception
class Motor
{
	private:
		string exception_name="This motor has problems";
	public:
		Motor()
		{
			//When creating a motor instance we throw a string
			throw exception_name;
		}
};
//Definition of the car class
class Car
{
	//We create an instance of the motor 
	private:
		Motor *m;
	public:
		Car()
		{
		//When we initialize the car we initialize an instance of the motor
			m = new Motor();
		}
};
class Garage
{
	//We create an instance of a car
	private:
		Car *c;
	public:
	Garage()
	{
		try 
		{
		//When we create an instance of a garage we initialize a car
			c= new Car();
		}
		catch (string& ex)
		{
		/*
		We catch the exception thrown by the car (more specifically
		the motor will throw the exception and the car will throw it 
		forward)
		*/
			string s="The car in this garage has problems with the motor";
//As requested we throw a different exception that will be treated in main
			throw s;
		}
	}
};
int main ()
{
	try
	{
		//We try to create a garage instance
		Garage g;
	}
	catch (string& ex)
	{
//We catch the error that was thrown in the Garage constructor
		cout<<"Exception caught in main: "<<ex<<endl;
	}
	return 0;
}