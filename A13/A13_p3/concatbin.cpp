/*
   CH-230-A
   a13_p3.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	int n,i;
	string s;
//Opening the output file
	ofstream fout ("concatn.txt",ios::binary);
//Check for null pointer
	if(!fout.good())
	{
		cerr<<"Error opening output file"<<endl;
        exit(1);
	}
	//Reading n and then n file names
	cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>s;
			//Opening the input file (binary mode)
			ifstream fin (s,ios::binary);
			//Check for null pointer
			if(!fin.good())
			{
				cerr<<"Error opening input file"<<endl; 
				exit(2);
			}

			//Get the length of the file
			fin.seekg(0,fin.end);
			int length = fin.tellg();
			fin.seekg(0,fin.beg);

	//Dynamically allocating a buffer with the size of the input file
			char* buffer = new char[length];

		//Reading the content from the input file (binary mode)
			fin.read(buffer,length);
		//Writing the content into the output file (binary mode)
			fout.write(buffer,length);
		//We add a \n character to separate the content of different files
			fout.write("\n",1);

		//We close the input file
			fin.close();

		//Free the memory from the dynamically allocated buffer
		delete[] buffer;
		}
	//We close the output file
	fout.close();
	return 0;
}