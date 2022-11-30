/*
   CH-230-A
   a8_p9.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//We declare the input and output files and we open the output file
	FILE *input,*output;
	output=fopen("output.txt","w");
	if(output==NULL)
	{
		printf("Some error occurred\n");
		exit(1);
	}
/*
File_name array will help us store from the keyboard the name of the
input file
*/
	char *file_name,ch;
	int n,i=0,pos,size=50;
	//We read the number of input files
	scanf("%d",&n);
	getchar();
	fprintf(output,"Concating the content of %d files ...\n",n);
	fprintf(output,"The result is:\n");
	for(pos=0;pos<n;pos++)
	{

	i=0;
	size=50;
	/*
	As we don't know how many characters does the name of the file has we 
	start with an arbitraty size and as we go we reallocate if needed
	*/
		file_name=(char *) malloc (sizeof(char)*size);
    	if(file_name==NULL)
    	{
        	printf("Memory allocation problem\n");
        	exit(0);
    	}
/*
We read character by character until we reach a new line meaning the next
name of the input file
*/
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
/*
We check that after we stop we can fit the \0 char in the array
else we increase the size and reallocate memory
*/
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

//We open the current input file
	input = fopen(file_name,"r");
	if(input==NULL)
	{
		printf("Some error occurred\n");
		exit(0);
	}
//We use a buffer of 64 bytes
	char buffer[64];
//nr_or_chunks will store how many chuncks of 1byte data is in the input
	int nr_of_chunks=fread(buffer,sizeof(char),64,input);
//fwrite will write in the output files all the data from the input
	fwrite(buffer,sizeof(char),nr_of_chunks,output);
//we free the file_name string
	free (file_name);
//We close the input file
	fclose(input);
	}
	fprintf(output,"The result was written into output.txt\n");
//When we are done with everything we close the output file
	fclose(output);
	return 0;
}