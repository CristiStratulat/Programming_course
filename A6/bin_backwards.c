/*
   CH-230-A
   a6_p5.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
//Declaring the maximum number of bits that are in an unsigned char type
const int maxbit = sizeof(unsigned char)*8-1;

int main ()
{
    //Declaring and reading the character
    unsigned char c;
    int i;
    scanf("%c",&c);
    //Printing the decimal representation
    printf("The decimal representation is: %d\n",c);

    //Printing  the backwards binary representation
    printf("The backwards binary representation is: ");

    /*
    We iterate through all bits and with the help of a mask (1) we check 
    the value of the bit. The mask will go from right to left so we just
    display the corresponding value hence we will get the backwards
    representation. If we are on the i bit and we will shift the character
    with i bits to the right and we will get a 0 this means that the remaning
    bits are 0 so we must stop else we would just print useless 0 bits.
    */
    for(i=0;i<=maxbit;i++)
    {
        if((c>>i)==0)
            break;
        if(c&1<<i)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    return 0;
}