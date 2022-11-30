/*
   CH-230-A
   a6_p2.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
/*
We define a macro to determine the least significant bit and we us a mask by 
using a mask (...01). (A&1) will return 1 if the last bit is 1 else 0. 
*/
#define least_bit(A) ((A)&1)

int main ()
{
    //Declaring and reading the variable
    unsigned char a;
    scanf("%c",&a);
    
    //We print the decimal representation and the least significant bit
    printf("The decimal representation is: %d\n",a);
    printf("The least significant bit is: %d\n",least_bit(a));
    
    return 0;
}