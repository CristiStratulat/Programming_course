/*
   CH-230-A
   a6_p1.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

//Writing a macro that swaps variables a and b through an aux variable
#define swap(a,b,data_type) { data_type aux; aux=a; a=b; b=aux;}

int main ()
{
    //Declaring and reading the variables
    int a,b;
    double x,y;
    scanf("%d%d",&a,&b);
    scanf("%lf%lf",&x,&y);

    //Calling the macro hence swapping the variables and printing them
    swap (a,b,int);
    swap(x,y,double);
    
    printf("After swapping:\n%d\n%d\n%lf\n%lf\n",a,b,x,y);

    return 0;
}