/*CH-230-A
    a1 p3.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
/*
The first and the biggest problem is the lack of a #
in the beginning of the program.
The second problem is that to b is assigned a value that is not integer,
so if we change the data type from int to float 
it will be possible to assign 13.5 to b.
Another problem is that result variable is declared as float.
But in the Printf function it is expected an integer result. 
So changing the expected result (from %d to %f) will give the right output
*/
#include <stdio.h> //added a # so the code would not give a compile error

int main () 
{
    float result; /*The result of the division */
    int a=5;
    float b=13.5; //changed from int to float
    result =a/b;
    printf("The result is %f\n",result); //changed from %d to %f
    return 0;
}