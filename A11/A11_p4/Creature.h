/*
   CH-230-A
   a11_p4.h
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
//Adding classes definition

class Creature {
	public:
		Creature();  
		~Creature();
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		~Wizard();
		void hover() const;

	private:
		int distFactor;
};

//Adding other type of creature, Dwarf
class Dwarf : public Creature {
	public:
		Dwarf();
		~Dwarf();
		void jump() const;
	private:
		int height;
};

//Adding other type of creature, Dragon
class Dragon : public Creature {
	public:
		Dragon();
		~Dragon();
		void fire() const;
	private:
		int power;	
};
