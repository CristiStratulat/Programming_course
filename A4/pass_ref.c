/*
   CH-230-A
   a4_p10.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>


//The function that returns by reference the required results
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod=a*b;
    *div=a/b;
    *pwr=powf(a,b);
    *invb=1/b;
}
int main ()
{
    //Declaring and reading the required variables
    float a,b,prod,div,pwr,invb;
    scanf("%f%f",&a,&b);

    //Calling the function and passing as pointers the variables needed
    proddivpowinv(a,b,&prod,&div,&pwr,&invb);

    //Printing the results of the computation
    printf("The product is %f\n",prod);
    printf("The division is %f\n",div);
    printf("The result of a to the power of b is %f\n",pwr);
    printf("The result of 1/b is %f\n",invb);

    return 0;
}