/*
    CH-230-A
    a3_p1.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

int main ()
{
    //Declaring the required variables and reading the float number
    float x;
    int n,i;
    scanf("%f",&x);

    /*
    We use while() instruction to validate the data (valid integer value).
    We read an initial value. If the value is valid it will not pass
    the while condition so nothing will happen. 
    (Integer valid from the first try)
    If the value is not valid we will enter the loop and read data 
    from the keyboard until the data read is valid.
    */
    scanf("%d",&n);
    while (n<=0)
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d",&n);
    }
    /*
    After making sure we entered a valid value we will 
    print x n times on the screen using the for loop.
    */
    for(i=0;i<n;i++)
        printf("%f\n",x);

    return 0;
}