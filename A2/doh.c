/*
    CH-230-A
    a2-p2.c 
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
int main ()
{
    //Declaring the variable and reading the value from keyboard
    char c;
    scanf("%c",&c);

    //Printing the variable with the required specification of base
    printf("character=%c\ndecimal=%d\noctal=%o\nhexadecimal=%x\n",c,c,c,c);
    return 0;
}