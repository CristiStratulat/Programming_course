/*
   CH-230-A
   a11_p2.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
		~Creature();
		void run() const;

	protected:
		int distance;
};

//Adding cout to print on screen a text when the function is called

Creature::Creature(): distance(10){
	cout<<"Creature constructor called"<<endl;
}    

Creature::~Creature(){
	cout<<"Creature destructor called"<<endl;
}
void Creature::run() const
{ 
	cout<<"Run method called"<<endl;
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
		~Wizard();
		void hover() const;

	private:
		int distFactor;
};


Wizard::Wizard() : distFactor(3){
	cout<<"Wizard constructor called"<<endl;
}  

Wizard::~Wizard(){
	cout<<"Wizard destructor called"<<endl;
}

void Wizard::hover() const
{
	cout<<"Hover method called"<<endl;
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//Adding other type of creature, Dwarf
class Dwarf : public Creature {
	public:
		Dwarf();
		~Dwarf();
		void jump() const;
	private:
		int height;
};

//Implementing constructor, destructor and method

Dwarf::Dwarf(): height(20){
	cout<<"Dwarf constructor called"<<endl;
}

Dwarf::~Dwarf(){
	cout<<"Dwarf destructor called"<<endl;
}

void Dwarf::jump() const {
	cout<<"Jump method called:"<<endl;
	cout<<"The dwarf can jump at to a height of "<<height+5<<"cm"<<endl;
}

//Adding other type of creature, Dragon
class Dragon : public Creature {
	public:
		Dragon();
		~Dragon();
		void fire() const;
	private:
		int power;	
};

//Implementing constructor, destructor and method

Dragon::Dragon():power(10){
	cout<<"Dragon constructor called"<<endl;
}

Dragon::~Dragon(){
	cout<<"Destructor called"<<endl;
}

void Dragon::fire() const
{
	cout<<"Fire method called"<<endl;
	cout<<"The dragon spits fire with a power of "<<power<<endl;
}


int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

	//Creating one instance of wizard
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

	//Creating one instance of dwarf
	cout<<"\nCreating a Dwarf.\n";
	Dwarf d;
	d.run();
	d.jump(); //Specific method

	//Creating one instance of dragon
	cout<<"\nCreating a Dragon\n";
	Dragon dr;
	dr.run();
	dr.fire(); //Specific method

	cout<<'\n';

    return 0;
} 
