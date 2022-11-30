/*
   CH-230-A
   a9_p9.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <cstring>
using namespace std;

//Function that replaces all vowels in a string with _ as the game mentions
void replace_vowels(string &s)
{
	unsigned int i;
	for(i=0;i<s.size();i++)
		if(isalpha(s[i]))
			if(strchr("aeiou",s[i]))
				s[i]='_';
}
/*
Function that checks if the character inputed from the user is part
of the word that he is trying to guess.
*/
void replace_correct(string &s,string s_orig, char x,int &tries)
{
/*
String s represents the word that the user is seeing in the game.
S is constantly getting modified as will show the current state of the 
word in the game.
S_origin is the original string (the original word that the user 
is trying to guess).
*/
	unsigned int i,ok=0;
//When the user guessed a character we replace the corresponding _ with it
	for(i=0;i<s.size();i++)
	{
		if(x==s_orig[i])
		{
			s[i]=x;
			ok=1;
		}
	}
/*
Ok variable tells us if modifications were made on the word. If no 
modifications were made the character guessed was wrong. Hence we increment
the number of tries.
If the guess was correct we print the corresponding message.
*/
	if(ok==0)
	{
		cout<<"Wrong guess, try again"<<endl;
		tries++;
	}
	else
	{
		cout<<"Correct guess"<<endl;
	}
}
int main ()
{
//All strings possible to be picked
	string s[]={"computer","television","keyboard","laptop","mouse",
	"playstation","management","soup","possibility","version","elevator",
	"artisan","advice","reputation","library","lab","fact"};
	string chosen,decision;
	int random_number,tries=1;
	char x;
	do
	{
	/*
	We pick a random string. We do this by picking a random number and
	using the number as the position
	*/
	srand(static_cast<unsigned int>(time(0)));
	random_number=rand();	
	//There are 17 strings so we need a random word in range 0..17
	random_number=random_number%18;
	//We store the word in a variable that we will modify through the game
	chosen=s[random_number];

	//We replace the vowels with _
	replace_vowels(chosen);
	do
	{
		cout<<chosen<<endl;
		cout<<"Make your guess! Input a character"<<endl;
		//Player makes the guess
		cin>>x;
		replace_correct(chosen,s[random_number],x,tries);
//We repeat this process until the current word is the same as the original
	} while (chosen!=s[random_number]);

	cout<<chosen<<endl;
	cout<<"Congratulations! You guessed the word in "<<tries<<" tries"<<endl;
	cout<<"Type quit if you want to quit"<<endl;
	cout<<"Type something else if you want to play again"<<endl;
//We ask player for another action
	cin>>decision;
//If we types quit the game stops
	} while (decision!="quit");
	return 0;
}