/*CH-230-A
    a1 p1.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
/*
The problem in this case is that the result is declared as double but
(3+1)/5 is a division of integers resulting in an integer.
Hence to solve this problem we should add (double) 
in front of the expresion turning it into a double type result
*/
#include <stdio.h>
int main ()
{
    double result;
    result = (double)(3+1)/5; //added here (double)
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}