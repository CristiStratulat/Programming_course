/*
   CH-230-A
   a5_p3.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Function that returns the number of lowercase characters
int count_lower(char *str)
{
    int count=0;
    char *p;
    //Looping through the array using pointer aritmetic
    for(p=str;p<str+strlen(str);p++)
    //When we find a letter that is lowercase we increment the counter
        if(isalpha(*p))
            if(islower(*p))
                count++;
    return count;
}
int main ()
{
    //We declare and read the first string from keyboard
    char str[50];
    
    fgets(str,sizeof(str),stdin);

    //Loop that ensures that we stop when we read an empty string 
    while (strcmp(str,"\n")!=0)
    {
    //Calling the function, displaying the result and reading another string
        printf("The number of lowercase charactes is:%d\n",count_lower(str));
        fgets(str,sizeof(str),stdin);
    }
    return 0;
}