/*
   CH-230-A
   a6_p7.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
unsigned char set3bits (unsigned char c,int a,int b,int d)
{
/*
We always shift the mask (1) to the desired bit and using a bitwise or
we flip the bit to 1 (the bitwise when it has an input 1 will always
flip the bit to 1)
*/
    c = c | (1<<a); 
    c = c | (1<<b);
    c = c | (1<<d);
    return c;
}   
int main ()
{
    int i=7,a,b,d;
    unsigned char c;
    scanf("%c",&c);
    scanf("%d%d%d",&a,&b,&d);
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

    printf("After setting the bits: ");
//We repeat the same algorithm as above but with the new c (bits flipped)
    for (int i=7; i >= 0; i--) 
        printf("%d", (set3bits(c,a,b,d) >> i)&1 ? 1 : 0);
    printf("\n");
    return 0;
}