/*
    CH-230-A
    a2-p7.c 
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int i = 8;
    /*
    In the initial code there were no brackets after while hence
    just the first instruction after the while will be executed.
    The first instruction is printf() and it is not affecting the i value
    so this will lead to an infinite loop.
    By adding the brackets at the beginning of the while and after i--;
    the loop will function correctly.
    */
    while (i >= 4)
    {
        printf("i is %d\n", i);
        i--;
    }
    printf("That’s it.\n");
    return 0;
}