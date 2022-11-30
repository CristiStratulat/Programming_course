/*
    CH-230-A
    a2-p10.c 
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    /*
    We declare the integer variable and we read it from the keyboard
    Here there are 2 cases: 1. the value is valid; 2. the value is not valid
    We verify this in the while condition (if a<=0 (a is negativ or 0)) 
    the value is not valid so we should be able to input another value.
    This is why in the first while we will have another scanf();
    The while will loop as long as the input is not valid.
    We read the first a value outside of the while so there is an initial 
    term of comparison (if we wouldn't read anything we wouldn't know 
    if the input is valid or not).
    */
    int a;
    scanf("%d",&a);
    while(a<=0)
        scanf("%d",&a);
    /*
    After we made sure the input a value we declared an i variable
    that will help us loop through the while.
    Initially the i=1 and at every step we increment it with one
    */
    int i;
    i=1;
    while(i<=a)
    {   
        /*
        We used  if else command to know when to display day or days.
        1 day = 24 hours
        2 dayS = 48 hours ... 
        So after i=1 there are days not a single day
        So we need the plural for day.
        This is why we used the if.
        In the printf the number of hours is equal to 24*i 
        (i is the current number of the day)
        */
        if(i==1)
            printf("%d day = %d hours\n",i,24*i);
        else
            printf("%d days = %d hours\n",i,24*i);
        i++;
    }
    return 0;
}