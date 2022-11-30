/*
    CH-230-A
    a4_p2.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int main ()
{
    /*
    Declaring the character array and reading it from the keyboard
    We declared n that will store the lenght of the array
    */
    char v[50];
    int n,i;
    fgets(v,sizeof(v),stdin);

    /*
    fgets() will read the new line as well.
    We use the command bellow to delete the new line from the array
    */
    v[strlen(v)-1]='\0';
    n=strlen(v);

    //We loop through all characters of the array
    for(i=0;i<n;i++)
    {   
    /*
    The printing pattern is the following
    -the characters that are on even positions should be printed first then \n
    -the characters that are on odd positions should have first a ' ' 
    (space character) followed by the character itself and then \n
    The if checks the position and prints accordingly 
    */                                                                                   
        if(i%2==0)
            printf("%c\n",v[i]);
        else
            printf(" %c\n",v[i]);  
    }
    return 0;
}