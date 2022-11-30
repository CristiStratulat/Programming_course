/*
   CH-230-A
   a8_p8.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	/*
	We declare 2 arrays one for reading the file name and the other one for 
	reading the content of the file.
	*/
	char *file_name,*string;
	int i=0,size=50,count=0;
	
	//We allocate an initial arbitrary size to file name 
	//(we don't know how long can be the file name input)
	file_name=(char *) malloc (sizeof(char)*size);
    if(file_name==NULL)
    {
        printf("Memory allocation problem\n");
        exit(0);
    }

	//We read character by character until we reach a new line
    char ch;
    scanf("%c",&ch);
    while(ch!='\n')
    {
	//We check if we read more characters then we can store in the array
        if(i>=size)
        {
    //If we need to store more characters we increase the size
            size=size*2;
	//We reallocate memory with the new size
            file_name=realloc(file_name ,sizeof(char)*size);
            if(file_name==NULL)
            {
                printf("Memory allocation problem\n");
                exit(0);
            }
        }
	//We store the character in the array
        file_name[i]=ch;
   //We go to the next position in the array (we start from 0)
        i++;
	//We read the next character
        scanf("%c",&ch);
    }
	//We check that after we stop we can fit the \0 char in the array
	//else we increase the size and reallocate memory
    if(i>=size)
        {
            size=size*2;
            file_name=realloc(file_name ,sizeof(char)*size);
            if(file_name==NULL)
            {
                printf("Memory allocation problem\n");
                exit(0);
            }
        }
    file_name[i]='\0';
	
	size=50;
	//We open the input file with the given filname from the input
	FILE *input;
	input = fopen(file_name,"r");
	if(input==NULL)
	{
		printf("Some error occurred\n");
		exit(0);
	}
	/*
	We repeat the same process as before for reading a string with unknown 
	dimensions. We don't know how many characters we have stored in the 
	input file.
	*/
	string=(char *) malloc (sizeof(char)*size);
    if(string==NULL)
    {
        printf("Memory allocation problem\n");
        exit(0);
    }
	i=0;
	//We read character by character using getc
	ch=getc(input);
	//We stop reading characters at the end of the file
    while(ch!=EOF)
    {
		//Process explained above
        if(i>=size)
        {
            size=size*2;
            string=realloc(string,sizeof(char)*size);
            if(string==NULL)
            {
                printf("Memory allocation problem\n");
                exit(0);
            }
        }
        string[i]=ch;
        i++;
        ch=getc(input);
    }

    if(i>=size)
        {
            size=size*2;
            string=realloc(string ,sizeof(char)*size);
            if(string==NULL)
            {
                printf("Memory allocation problem\n");
                exit(0);
            }
        }

    string[i]='\0';
	
	//We use the function STRTOK for counting the number of words
	char *p;
	p=strtok(string," ,?!.\t\r\n");
	//p represents a word between the separators
	while(p!=NULL)
	{
		//we count the number of words
		count++;
		//we go to the next possible word
		p=strtok(NULL," ,?!.\t\r\n");
	}
	printf("The file contains %d words.\n",count);

//We free the memory of the 2 used arrays
	free(string);
	free(file_name);
//We close the input file
	fclose(input);
	
	return 0;
}