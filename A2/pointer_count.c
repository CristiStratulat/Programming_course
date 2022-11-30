/*
    CH-230-A
    a2-p5.c 
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

int main ()
{
    //Declaring and reading the integer
    int a;
    scanf("%d",&a);

    /*
    Declaring the pointer ptr_a and making him point to a.
    Finally we print on screen the address of the pointer.
    */
    int *ptr_a;
    ptr_a=&a;
    printf("Pointer address=%p\n",ptr_a);

    /*
    By using *ptr_a we access the value of the variable
    so we can increase the value of a by 5.
    After increasing the value we print the modified value
    and the pointer address (it will be the same
    since we do not interfere with the memory address)
    */
    *ptr_a=*ptr_a+5;
    printf("Pointer value=%d\n",*ptr_a);
    printf("Pointer address=%p\n",ptr_a);
    return 0;
}