/*
   CH-230-A
   a6_p3.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
//Writing a macro for determining the minimum and maximum of three numbers
#define  MIN(A,B,C) (((A)<(B)&&(A)<(C))? A: ((B)<(C)) ? (B):(C))
#define  MAX(A,B,C) (((A)>(B)&&(A)>(C))? A: ((B)>(C)) ? (B):(C))

//Writing the mid_range macro as required
#define  mid_range(A,B,C) (float)(MIN(A,B,C) + MAX(A,B,C))/2

int main ()
{
    //Reading the input and printing the result with a precision of 6
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("The mid-range is: %.6f\n", mid_range(a,b,c));
    return 0;
}