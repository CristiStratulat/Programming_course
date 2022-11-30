/*
    CH-230-A
    a2-p8.c 
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    //Declaring and reading the integer
    int x;
    scanf("%d",&x);

    /*
    If the reminder of x divided by 7 AND x divided by 2 is 0
    this means that x is divisible both with 2 and 7 (mathematical proof)
    Else it means that x is not divisible by 2 AND 7 
    */
    if(x%7==0&&x%2==0)
        printf("The number is divisible by 2 and 7\n");
    else
        printf("The number is NOT divisible by 2 and 7\n");
    return 0;
}