/*
   CH-230-A
   a10_p2.h
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	//Newly added properties
	int age;
	double weight;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);

	//Newly added setters
	void setAge (int newage);
	void setWeight(double newweight);

	// getter method
	int getHunger();

	//Newly added getters
	int getAge();
	double getWeight();

	// service method
	void print();
};
