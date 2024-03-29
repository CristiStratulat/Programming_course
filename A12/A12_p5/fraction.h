/*
   CH-230-A
   a12_p5.h
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	void print();				// prints it to the screen

	//Overloading <<,>> using friend functions
	friend std::ostream& operator <<(std::ostream&, const Fraction&);
	friend std::istream& operator >>(std::istream&, Fraction&);

	//Overloading * and / operator
	Fraction operator * (const Fraction&);
	Fraction operator / (const Fraction&);

	//Overloading + and - operator
	Fraction operator + (const Fraction&);
	Fraction operator - (const Fraction&);

	//Overloading the = operator
	Fraction& operator= (const Fraction&);

	//Overloading < and > operator
	bool operator < (const Fraction&);
	bool operator >(const Fraction&);
};


#endif /* FRACTION_H_ */
