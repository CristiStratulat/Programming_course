/*
    CH-230-A
    a3_p6.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
//Required function converting from kg and g to pounds
float to_pounds(int kg, int g)
{
    //local variable where we will store the result after conversion
    float pounds;
    /*
    math formula: 1 kg = 2.2 pounds
    1kg = 1000 grams
    1 gram = 2.2/1000 =0.0022 pounds
    */
    pounds=kg*2.2+g*0.0022;
    return pounds;
}
int main ()
{
    //Declaring and reading the required variables
    int kg, g;
    scanf("%d%d",&kg,&g);
    //Printing the result
    printf("Result of conversion: %f\n",to_pounds(kg,g));
    return 0;
}