/*
   CH-230-A
   a9_p5.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	//Asking player for name (reading a string)
	string name;
	cout<<"Enter your name"<<endl;
	getline(cin,name);
	//Generating a random number
	cout<<"Generating random number..."<<endl;
	int random_number,tries=0,guess;
	srand(static_cast<unsigned int>(time(0)));
	random_number=rand();	
	//Making sure the random_number will store a number between 1 and 100
	random_number=random_number%101;
	while(1)
	{
	//Get a guess from player
		cout<<"Get guess from player"<<endl;
		cin>>guess;
	//Increment the number of tries
		tries++;
	//Check for equality or too high or too low
		if(guess==random_number) //When we guessed we stop
			break;
		else if(guess<random_number)
			cout<<"Too low"<<endl;
		else if (guess>random_number)
			cout<<"Too high"<<endl;
	}
	//Congratulate player
	cout<<"Congratulation "<<name<<"! You had "<<tries<<" tries."<<endl;
	return 0;
}