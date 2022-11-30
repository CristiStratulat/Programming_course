/*
   CH-230-A
   a8_p7.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    //Declaring the input and output files
    FILE *txt1, *txt2 ,*merge;
 
    //Opening the input files just for reading
    txt1 = fopen("text1.txt","r");
    if(txt1==NULL)
    {
        printf("Some error occurred!\n");
        exit(1);
    }
 
    txt2= fopen ("text2.txt","r");
    if(txt2==NULL)
    {
        printf("Some error occurred!\n");
        exit(1);
    }
 
    //Opening the output file just for writing
    merge= fopen("merge12.txt","w");
    if(merge==NULL)
    {
        printf("Some error occurred!\n");
        exit(1);
    }
/*
We read using the getc function character by character from the first input
We use the while (ch!=EOF) to check if we reached the end of file.
If the character we read if a newline we put in the output file a newline
else we put the current character. After we put ch in the output file we go
to the next ch
*/
	char ch;
    ch=getc(txt1);
    while(ch != EOF)
    {
//By checking for the \n we make sure we read line by line		
        if(ch=='\n')
            fprintf(merge,"\n");
        else
            fprintf(merge,"%c",ch);
        ch=getc(txt1);
    }
//We repeat the same process above for the second input file
    ch=getc(txt2);
    while(ch != EOF)
    {
        if(ch=='\n')
            fprintf(merge,"\n");
        else
            fprintf(merge,"%c",ch);
        ch=getc(txt2);
    }
 //We close all the files
    fclose(txt1);
    fclose(txt2);
    fclose(merge);

    return 0;
}