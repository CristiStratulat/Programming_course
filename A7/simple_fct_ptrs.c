/*
   CH-230-A
   a7_p4.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Function that prints the elements of the array in uppercase
void print_uppercase (char *v)
{
	int i=0;
	for(i=0;i<strlen(v);i++)
		printf("%c",toupper(v[i]));
	printf("\n");
}

//Function that prints the elements of the array in lowercase
void print_lower (char *v)
{
	int i=0;
	for(i=0;i<strlen(v);i++)
		printf("%c",tolower(v[i]));
	printf("\n");
}

//Function that prints the uppercase elements in lowercase and vice versa
void print_reverse (char *v)
{
	int i=0;
	for(i=0;i<strlen(v);i++)
	{
		if(isalpha(v[i]))
		{
		if(isupper(v[i]))
			printf("%c",tolower(v[i]));
		else if (islower(v[i]))
			printf("%c",toupper(v[i]));
		}
		else
			printf("%c",v[i]);
	}
	printf("\n");
}

//Function that frees the memory and stop the execution of the program
void stop(char *v)
{
	free(v);
	exit(0);
}


int main ()
{
	//Declaring the required characters
	char *v,c,m;
	int pos,size=50,l=0;

//Allocating at first 50 characters
	v=(char *) malloc(sizeof(char)*size);
	if(v==NULL)
		{
			printf("Memory allocation problem\n");
			exit(1);
		}
//Reading the array character by character
	scanf("%c",&m);
/*
As we don't know how large is the array we read character by character
and whenever we read more characters than the allocated size we reallocate 
more memory
*/
	while(m!='\n')
	{
		if(l>size)
		{
			size=size*2;
			v=(char *)realloc(v,sizeof(char)*size);
			if(v==NULL)
			{
			printf("Memory allocation problem\n");
			exit(1);
			}
		}
		v[l]=m;
		l++;
		scanf("%c",&m);
	}
	if(l>size)
		{
			size=size*2;
			v=(char *)realloc(v,sizeof(char)*size);
			if(v==NULL)
			{
			printf("Memory allocation problem\n");
			exit(1);
			}
		}
	v[l]='\0';

//Array of function pointer
	void (*func_arr[4]) (char*);

//We attribute to each position of the array a specific function
	func_arr[1]=print_uppercase;
	func_arr[2]=print_lower;
	func_arr[3]=print_reverse;
	func_arr[4]=stop;

	while(1)
	{
	/*
	The character we read represents the position where the required function 
	is located. We transform from character to integer and we call the 
	function we need through the function pointer
	*/
		scanf("%c",&c);
		getchar();
		pos=(int)(c-48);
		func_arr[pos](v);
	}
   return 0;
}