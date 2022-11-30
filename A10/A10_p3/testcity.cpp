/*
   CH-230-A
   a10_p3.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include "City.h"
using namespace std;
int main ()
{
	//Declaring the 3 instances required
	City Bremen,Paris,London;
	string N_Br="Bremen",N_Pa="Paris",N_Lon="London";
	string M_Br="Andreas Bovenschulte",M_Pa="Anne Hidalgo",
	M_Lon="Sadiq Khan";

	//Setting the properites of the required instances
	Bremen.setName(N_Br);
	Paris.setName(N_Pa);
	London.setName(N_Lon);

	Bremen.setInh(569352);
	Paris.setInh(2161000);
	London.setInh(8982000);

	Bremen.setMayorName(M_Br);
	Paris.setMayorName(M_Pa);
	London.setMayorName(M_Lon);

	Bremen.setArea(326.7);
	Paris.setArea(105.4);
	London.setArea(1572);

/*
Priting on screen the data stored in the instances. We use this printing 
with the purpose of testing the getters.
*/
	cout<<"The name of the city is "<<Bremen.getName()<<". It has "<<
	Bremen.getInh()<<" inhibants. The mayor is "<<Bremen.getMayor()<<
	".The area of the city is "<<Bremen.getArea()<<" km^2"<<endl;

	cout<<"The name of the city is "<<Paris.getName()<<". It has "<<
	Paris.getInh()<<" inhibants. The mayor is "<<Paris.getMayor()<<
	".The area of the city is "<<Paris.getArea()<<" km^2"<<endl;


	cout<<"The name of the city is "<<London.getName()<<". It has "<<
	London.getInh()<<" inhibants. The mayor is "<<London.getMayor()<<
	".The area of the city is "<<London.getArea()<<" km^2"<<endl;

	return 0;
}