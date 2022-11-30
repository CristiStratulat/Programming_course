/*
   CH-230-A
   a4_p11.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*
The definition of a character that counts all occurrences of the char c 
in the string, in a case insensitive manner.
*/
int count_insensitive (char *str, char c)
{
    int i,counter=0;
    for(i=0;i<strlen(str);i++)
    {
    /*
    If the current character is a letter we should check if the upper/lower 
    version of it matches with c. If it does we increment counter
    */
        if(isalpha(str[i]))
        {
            if(toupper(str[i])==c || tolower(str[i])==c)
                counter++;
        }
    //If it's not a character we just check if it matches with c
        else 
            if(str[i]==c)
                counter++;
    }
    return counter;
}
int main ()
{
    /*
    We declare the 2 arrays:

    In str we will read initially the string and we allocate a memory of 50

    In arr we will allocate the exact amount of memory needed and we copy 
    the string read from str.
    */
    char *str,*arr;

    //Allocating a memory of 50 initially
    str = (char *) malloc (sizeof(char)*50);
    
    //Check for valid pointer
    if(str==NULL)
        exit(1);

    //Read the string from the keyboard
    fgets(str,sizeof(str),stdin);
    
    //Allocating the exact memory needed for the string read
    arr = (char *) malloc (sizeof(char)* strlen(str));

    //Check for valid pointer
    if(arr==NULL)
        exit(1);

    //Copying the string in str in arr
    strcpy(arr,str);

    //Release memory from str
    free(str);


    //Calling the function and print the results
    printf("The character 'b' occurs %d times.\n",count_insensitive(arr,'b'));
    printf("The character 'H' occurs %d times.\n",count_insensitive(arr,'H'));
    printf("The character '8' occurs %d times.\n",count_insensitive(arr,'8'));
    printf("The character 'u' occurs %d times.\n",count_insensitive(arr,'u'));
    printf("The character '$' occurs %d times.\n",count_insensitive(arr,'$'));

    return 0;
}