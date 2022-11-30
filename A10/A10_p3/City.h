/*
   CH-230-A
   a10_p3.h
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <string>
using namespace std;

class City 
{
	//Required properties
private:
	string name;
	int num_inh; 
	string mayor_name;
	float area;

public:
	//Creating setters
	void setName (string& newname);
	void setInh (int new_num_inh);
	void setMayorName (string& new_mayor_name);
	void setArea (float newArea);

	//Creating getters
	string getName();
	int getInh();
	string getMayor();
	float getArea();

};