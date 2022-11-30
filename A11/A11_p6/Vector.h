/*
   CH-230-A
   a11_p6.h
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/

class Vector{
	private: //Declaring the properties
		int size;
		double *v;
	public:	//Declaring the constructors and destructor
		Vector();
		Vector(int, double *);
		Vector(const Vector&);
		~Vector();

		//Getters and setters
		int getSize() const;
		void setSize(int);
		double* getPointer() const;
		void setPointer (double *);

		//Declaring required methods
		void printVector() const;
		double norm();
		Vector add(const Vector&) const;
		Vector diff(const Vector&) const;
		double scalar(const Vector&);

};