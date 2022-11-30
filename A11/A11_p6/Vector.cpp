/*
   CH-230-A
   a11_p6.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "Vector.h"
#include <iostream>
#include <cmath>
using namespace std;

//Default constructor
Vector::Vector(){
	size=0;
	v=nullptr;
}

//Constructor with two parameters (both properties)
Vector::Vector(int nsize, double* vec){
	size=nsize; 
	v=new double[size];
	for(int i=0;i<size;i++)
		v[i]=vec[i];
}

//Copy constructor
Vector::Vector(const Vector& vec){
	size=vec.size;
	v=new double[size];
	for(int i=0;i<size;i++)
		v[i]=vec.v[i];
}

//Destructor
Vector::~Vector(){
	delete [] v;
}

//Getter for size
int Vector::getSize() const{
	return size;
}

//Getter for pointer
double* Vector::getPointer() const{
	return v;
}

//Setting the pointer
void Vector::setPointer(double* point){
	int i=0;
	while((point+i)!=NULL)
	{
		*(v+i)=*(point+i);
		i++;
	}

}
//Setting the size
void Vector::setSize (int nsize)
{
	/*
	Using an aux variable where we allocate the nsize memory.
	We initialize at first all elements on 0.
	We copy the elements from the current instance (v) in the aux.
	We delete and reallocate memory according to the new size.
	We copy the elements from the aux into v again and we keep 
	count if we shrink or we don't the memory
	*/
	double* aux;
	aux= new double[nsize];
	int i;
	for(i=0;i<nsize;i++)
		aux[i]=0;
	for(i=0;i<size;i++)
		aux[i]=v[i];
	delete [] v;
	v= new double[nsize];
	for(i=0;i<nsize;i++)
		v[i]=aux[i];
	if(size<nsize)
		for(i=size;i<nsize;i++)
			v[i]=0;
	delete []aux;
	size=nsize;
}
//Method for printing the elements of a vector
void Vector::printVector() const{
	int i;
	for(i=0;i<size;i++)
		cout<<v[i]<<" ";
	cout<<endl;
}

//Method for computing the norm of a vector
double Vector::norm (){
	double nrm=0;
	int i;
	for(i=0;i<size;i++)
		nrm=nrm+v[i]*v[i];
	nrm=sqrt(nrm);
	return nrm;
}

//Add method
Vector Vector::add(const Vector& a) const{ 
	int i;
	Vector s;
	s.size=size;
	s.v= new double[size];
	for(i=0;i<size;i++)
		s.v[i]=v[i]+a.v[i];
	return s;
}

//Difference method
Vector Vector::diff(const Vector& a) const{
	Vector s;
	int i;
	s.size=size;
	s.v= new double [size];
	for(i=0;i<size;i++)
		s.v[i]=v[i]-a.v[i];
	return s;
}

//Scalar product method
double Vector::scalar(const Vector& a){
	double sc=0;
	int i=0;
	for(i=0;i<size;i++)
		sc=sc+v[i]*a.v[i];
	return sc;
}