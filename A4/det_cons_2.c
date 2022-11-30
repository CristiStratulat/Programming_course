/*
   CH-230-A
   a4_p5s.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

/*
    Library needed for using isalpha() function. 
    Isalpha() checks if the character given as parameter is 
    an alphabetic character or not.
*/
#include <ctype.h>

int count_consonants(char str[])
{
    int counter=0;
    /*
    We declared a char pointer. In the for loop it will first be initialized
    with the str which is equivalent to the address of the first
    character in the array. The stop condition is when the pointer 
    reaches the end of the array, represented by the address of the last 
    character (first position = str + stlren(str) [how many chars are])
    At each step we increment the pointer with one.
    To access the data behind the pointer we use the * operator
    */
    char *p;
    for(p=str;p<str+strlen(str);p++)
        if(isalpha(*p) &&!(strchr("aeiouAEIOU",*p)))
            counter++;
    return counter;
}
int main ()
{
    //we declare and read the first string from keyboard
    char v[100];
    fgets(v,sizeof(v),stdin);
    /*
    if we read from the keyboard just '\n' character (new line character),
    we know that the string is empty so the program should stop its execution.
    By using while we check that the string we read is not empty and we 
    print the number of consonants then we read another string.
    The while we stop when we enter an empty string
    */
    while (v[0]!='\n')
    {
        printf("Number of consonants=%d\n",count_consonants(v));
        fgets(v,sizeof(v),stdin);
    }
    return 0;
}


