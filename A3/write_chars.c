/*
    CH-230-A
    a3_p2.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

int main ()
{
    //Declaring the required variables and read the input from the keyboard
    char ch;
    int n,i;
    scanf("%c%d",&ch,&n);

    /*
    We loop through all values from 0 to n and at every step we print 
    the variable ch-i (the character minus current step as required in 
    the exercise: ch, ch-1, ch-2...ch-n)
    */
    for(i=0;i<=n;i++)
        printf("%c\n",ch-i);
    return 0;
}