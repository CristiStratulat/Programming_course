/*
   CH-230-A
   a6_p6.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
int main ()
{
    //Declaring and reading the character
    unsigned char c;
    int i=7;
    scanf("%c",&c);
    //Printing the decimal and the binary representation of it
    printf("The decimal representation is: %d\n",c);
    printf("The binary representation is: ");
    
    /*
    We loop through all the bits and by using the 1 mask we get the value
    of the coressponding bit. We start from 7 (from 0 to 7 there are 8 
    values so we start from the last bit) and we shift to the right with i 
    values so always we can compare with the mask (that is on the first 
    position). Hence we get all values of the bits from left to right 
    we print them and we get the binary representation on 8 bits.
    */
    for(i=7;i>=0;i--)
        if((c>>i)&1)
            printf("1");
        else
            printf("0");
    printf("\n");
    return 0;
}