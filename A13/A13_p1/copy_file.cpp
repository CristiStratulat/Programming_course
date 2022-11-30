/*
   CH-230-A
   a13_p1.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	string name_of_input,name_of_output,aux="_copy.",aux1;
	unsigned int i;

	//Reading the name of the file from the standard input
	cout<<"Please enter the name of the file: "<<endl;
	getline(cin,name_of_input);

	//Opening the input file
	ifstream in (name_of_input.c_str());

	//Check for null pointer after opening the file
	if(!in.good())
	{
		cerr<<"Error opening input file"<<endl; 
		exit(2);
	}

/*
We work with strings so the name of the output file will be as requested
in the problem (name of the inputfile)_copy.(extension of the input file)
*/
	for(i=0;i<name_of_input.length();i++)
		if(name_of_input[i]=='.')
			break;
	name_of_output=name_of_input.substr(0,i);
	aux1=name_of_input.substr(i+1,name_of_input.length());
	name_of_output=name_of_output+aux+aux1;
	
	//opening the output file
	ofstream out(name_of_output.c_str());

	//Check for null pointer
	if(!out.good())
    {
        cerr<<"Error opening output file"<<endl;
        exit(1);
    }

//Copying the content of the input file in the output line by line
	string temp;
	while(!in.eof())
	{
		getline(in,temp);
		out<<temp<<endl;
	}

//Closing the input and output files
	in.close();
	out.close();
	return 0;
}