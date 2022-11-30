/*
   CH-230-A
   a13_p7.cpp
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <iostream>
using namespace std;
//Defition for OwnException class extending exception
class OwnException : public exception
{
	//Property to store the string to be thrown
	private:
		string exception_name;
	public:
	//Default constructor
		OwnException(string& a){exception_name=a;}
		//Overwriting the what method
		const char * what() const noexcept {return "OwnException\n";}

};
void function (int x)
{
//Defining the cases and what is thrown
	if(x==1)
		throw 'a'; 
	else if (x==2)
		throw 12;
	else if (x==3)
		throw true;
	else
	{
		string s="Default case exception";
		throw OwnException(s);
	}
}
int main ()
{
	int i;
	/*
	Calling the function in main for the four versions. 
	Catching each exception in the specific manner
	*/
	for(i=1;i<=4;i++)
	{
		try
		{
			function(i);
		}
		catch (char ex)
		{
			cerr<<"Caught in main: "<<ex<<endl;
		}
		catch(int ex)
		{
			cerr<<"Caught in main: "<<ex<<endl;
		}
		catch(bool ex)
		{
			cerr<<"Caught in main: "<<ex<<endl;
		}
		catch (OwnException& ex)
		{
			cerr<<"Caught in main: "<<ex.what()<<endl;
		}
	}
	return 0;
}