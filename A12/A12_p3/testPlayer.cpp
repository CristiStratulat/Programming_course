/*
   CH-230-A
   a12_p3.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>
using namespace std;
int main ()
{
	char fn1[]="Messi",ln1[]="Leo",d1[]="1990-10-05",p1[]="FW",
	fn2[]={"Michael"},ln2[]={"Jordan"},d2[]="1992-01-05",p2[]="LW",
	fn3[]="Neymar",ln3[]="DeSilva", d3[]="1998-10-10",p3[]="RW";

	string s="Barcelona",s1="Hamburg";
	//Creating 3 players with different properties
	Player pl1(fn1,ln1,d1,(float)70,160,s,7,p1,10,'L');
	Player pl2(fn2,ln2,d2,(float)90,(float)210,s,10,p2,2,'R');
	Player pl3(fn3,ln3,d3,(float)65,(float)166,s,9,p3,12,'R');
	/*
	As the location property is static everytime we use a constructor
	to intialize it, it will change for all instances. So I called the same
	location as will have the same effect.
	*/

//We add a goal to the player
	cout<<endl;
	cout<<"Current number of goals for player 1"<<endl;
	cout<<pl1.getGoals()<<endl;
	pl1.addGoal();
	cout<<"Number of goals after we add one goal"<<endl;
	cout<<pl1.getGoals()<<endl;

//We print all players
	cout<<endl;
	pl1.printPlayer();
	cout<<endl;
	pl2.printPlayer();
	cout<<endl;
	pl3.printPlayer();
	cout<<endl;

//Moving all players to hamburg as location is static
pl1.setLocation(s1);

//Print the final form of the players
	cout<<endl;
	pl1.printPlayer();
	cout<<endl;
	pl2.printPlayer();
	cout<<endl;
	pl3.printPlayer();
	cout<<endl;
	return 0;
}