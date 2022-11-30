/*
   CH-230-A
   a12_p3.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "TournamentMember.h"
#include <cstring>
#include <iostream>
string TournamentMember::location;

//Definition of constructors
TournamentMember::TournamentMember()
{
	cout<<"Default constructor called"<<endl;
	strcpy(first_name,"not_initialized");
	strcpy(last_name,"not_initialized");
	strcpy(date_of_birth,"0000-00-00");
	weight=0;
	height=0;
	location="not_initialized";
}

TournamentMember::TournamentMember(char first_name[], char last_name[],
char date_of_birth[], float weight, float height, string& location)
{
	cout<<"Parametric constructor called"<<endl;
	strcpy(this->first_name,first_name);
	strcpy(this->last_name,last_name);
	strcpy(this->date_of_birth,date_of_birth);
	this->weight=weight;
	this->height=height;
	this->location=location;
	
}

TournamentMember::TournamentMember(TournamentMember& a){
	cout<<"Copy constructor called"<<endl;
	strcpy(first_name,a.first_name);
	strcpy(last_name,a.last_name);
	strcpy(date_of_birth,a.date_of_birth);
	height=a.height;
	weight=a.weight;
	location=a.location;
}

TournamentMember::~TournamentMember()
{
	cout<<"Destructor called"<<endl;
}

//Definition of the required method
void TournamentMember::print()
{
	cout<<"Print method called: " ;
	unsigned int i;
	cout<<"First name: ";
	for(i=0;i<strlen(first_name);i++)
		cout<<first_name[i];

	cout<<endl<<"Last name: ";
	for(i=0;i<strlen(last_name);i++)
		cout<<last_name[i];

	
	cout<<endl<<"Date of birth: ";
	for(i=0;i<strlen(date_of_birth);i++)
		cout<<date_of_birth[i];
	
	cout<<endl<<"Weight: " <<weight;
	cout<<endl<<"Height: " <<height;
	cout<<endl<<"Location: "<<location<<endl;
}

//Constructors for Player class
Player::Player():TournamentMember()
{
	cout<<"Default player constructor called"<<endl;
	number=0;
	strcpy(position,"not_initialized");
	goals=0;
	foot=' ';
}

Player::Player(char first_name[], char last_name[],char date_of_birth[], 
float weight, float height, string& location,int number,char position[],
int goals, char foot):TournamentMember(first_name,last_name,date_of_birth,
weight,height,location)
{
	cout<<"Parametric player constructor called"<<endl;
	this->number=number;
	strcpy(this->position,position);
	this->goals=goals;
	this->foot=foot;
}

Player::Player(Player& a): TournamentMember(a)
{
	cout<<"Copy constructor called"<<endl;
	strcpy(position,a.position);
	number=a.number;
	foot=a.foot;
	goals=a.goals;
}

Player::~Player()
{
	cout<<"Player destructor called"<<endl;
}

void Player::printPlayer()
{
	cout<<"Print method called"<<endl;
	cout<<"Player"<<endl;
	print();
	cout<<"Number: "<<number<<endl<<"Position: ";
	unsigned int i;
	for(i=0;i<strlen(position);i++)
		cout<<position[i];
	cout<<endl<<"Goals: "<<goals<<endl<<"Foot: "<<foot<<endl;
}
void Player::addGoal(){goals++;}