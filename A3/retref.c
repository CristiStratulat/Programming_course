/*
    CH-230-A
    a3_p10.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/

#include <stdio.h>
//Prototypes of the functions
float product (float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);
int main ()
{
    float a,b,p;
    scanf("%f",&a);
    scanf("%f",&b);
    
    //We see the functions have the same effect
    printf("Product of the first function=%f\n",product(a,b));
    productbyref(a,b,&p);
    printf("Product of second function= %f\n",p);

    modifybyref(&a,&b);
    printf("Effect of modifybyref function: a=%f, b=%f\n",a,b);
    return 0;
}
//Function returning the product
float product (float a, float b)
{
    return a*b;
}
//Function computing the product by referance
void productbyref(float a,float b, float *p)
{
    *p=a*b;
}
//Function modifying the variables by reference
void modifybyref(float *a, float *b)
{
    *a=*a+3;
    *b=*b+11;
}

