/*
    CH-230-A
    a3_p3.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/

#include <stdio.h>

/*
Creating a float function taking cm as an input (int). 
We make the converition from cm to km using a local variable
We put (float) before the division to make the result float as well
We reutrn the desired result
*/
float convert (int cm)
{
    float result;
    result=(float)cm/100000;
    return result;
}
int main ()
{
    //Declaring required variables and reading data
    int cm;
    float km;
    scanf("%d",&cm);

    //Calling the function and storing the result in a variable
    km=convert(cm);

    //Printing the result
    printf("Result of conversion: %f\n",km);
    return 0;
}