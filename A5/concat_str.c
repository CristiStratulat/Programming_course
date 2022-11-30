/*
   CH-230-A
   a5_p7.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    //Declaring and reading the first two strings from keyboard
    char *arr, first[100],second[100];
    fgets(first,sizeof(first),stdin);
    //Removing the '\n' character 
    first[strlen(first)-1]='\0';
    fgets(second,sizeof(second),stdin);

    //Dynamic memory allocation
    arr = (char *) malloc (sizeof(char)*(strlen(first)+strlen(second)));
    if(arr==NULL)
        exit(1);

    //Concatenating the two string in arr array
    strcat(arr,first);
    strcat(arr,second);
    printf("Result of concatenation: %s",arr);

    //Free the memory
    free(arr);
    
    return 0;
}