/*
    CH-230-A
    a2-p6.c 
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

int main ()
{
    //Declaring and reading the two double variables from keyboard
    double x,y;
    scanf("%lf%lf",&x,&y);

    /*
    Declaring the three required pointers and making them point towards
    the required variables
    */
    double *ptr_one,*ptr_two,*ptr_three;
    ptr_one=&x;
    ptr_two=&x;
    ptr_three=&y;

    /*
    We print the address of the pointers on the screen.
    As ptr_one and ptr_two both point towards the same variable 
    the addresses will be the same
    The address of ptr_three will be different as it points to other variable
    */
    printf("The address of pointer one=%p\n",ptr_one);
    printf("The address of pointer two=%p\n",ptr_two);
    printf("The address of pointer three=%p\n",ptr_three);
    printf("The address of pointer one and pointer two are the same\n");
    return 0;
}