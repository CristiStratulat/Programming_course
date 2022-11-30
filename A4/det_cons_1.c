/*
    CH-230-A
    a4_p4.c
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
    //n will store the length of the array, counter the number of consonants
    int n,i,counter=0;
    n=strlen(str);
    /*
    we loop through every character of the array. if the character is a letter
    of the alphabet and it is not a vowel we increase the counter.
    Strchr searches a chacarter in a string. 
    By calling strchr("aeiouAEIOU",str[i]) we check if the character 
    str[i] is part of the string aeriouAEIOU (checks if str[i] is vowel)
    By adding not in front of strchr we check if it's NOT a vowel
    */
    for(i=0;i<n;i++)
        if(isalpha(str[i]) &&!(strchr("aeiouAEIOU",str[i])))
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