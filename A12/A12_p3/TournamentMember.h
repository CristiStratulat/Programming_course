/*
   CH-230-A
   a12_p3.h
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <string>
#include <cstring>
using namespace std;

class TournamentMember
{
private: //Required properties
	char first_name[36];
	char last_name[36];
	char date_of_birth[11];
	//New properties
	float weight; 
	float height;
	static string location;
public:

	//Required constructors
	TournamentMember();
	TournamentMember(char*,char*,char*,float,float,string&);
	TournamentMember(TournamentMember&);
	~TournamentMember();

	//Getters
	char* getFirstName();
	char* getLastName();
	char* getDateofBirth();
	float getWeight();
	float getHeight();
	string getLocation();

	//Setters
	void setFirstName(char*);
	void setLastName(char*);
	void setDateofBirth(char*);
	void setWeight(float);
	void setHeight(float);

	//As well this is a method that sets the location
	void setLocation(string&);

	//Required methods
	void print();

};

class Player : public TournamentMember
{
    private:
        int number;
		char position[36];
        int goals;
        char foot; //Left or right footed
    public:
		//Required constructors
        Player();
        Player(char*,char*,char*,float,float,string&,int,char*,int,char);
        Player(Player&);
        ~Player();

        //Setters
		void setNumber(int);
		void setPosition(char*);
        void setFoot(char);

        //Getters
        int getNumber();
		char* getPosition();
        int getGoals();
        char getFoot();

        //Required methods
        void printPlayer();
        void addGoal();
};

//inline getters
inline char* TournamentMember::getFirstName(){ return first_name;}
inline char* TournamentMember::getLastName(){return last_name;}
inline char* TournamentMember::getDateofBirth(){return date_of_birth;}
inline float TournamentMember::getWeight(){return weight;}
inline float TournamentMember::getHeight(){return height;}
inline string TournamentMember::getLocation(){return location;}

//inline setters
inline void TournamentMember::setFirstName(char first_name[]){
	strcpy(this->first_name,first_name);
}
inline void TournamentMember::setLastName(char last_name[]){
	strcpy(this->last_name,last_name);
}
inline void TournamentMember::setDateofBirth(char date_of_birth[]){
	strcpy(this->date_of_birth,date_of_birth);
}
inline void TournamentMember::setWeight(float weight){this->weight=weight;}
inline void TournamentMember::setHeight(float height){this->height=height;}

//Method that sets the location (as required in the problem)
inline void TournamentMember::setLocation(string& location){
	this->location=location;
}


//inline getters for player
inline int Player::getNumber(){return number;}
inline char* Player::getPosition(){return position;}
inline int Player::getGoals(){return goals;}
inline char Player::getFoot(){return foot;}

//inline setters for player
inline void Player::setNumber(int number){this->number=number;}
inline void Player::setPosition(char position[])
{
	strcpy(this->position,position);
}
inline void Player::setFoot(char foot)
{
	this->foot=foot;
}