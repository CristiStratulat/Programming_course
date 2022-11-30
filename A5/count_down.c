/*
   CH-230-A
   a5_p10.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

//Recursive function printing all number from n to 1
void countdown (int n)
{
    //If n is greater than one we go to the next number and print it
    if(n>0)
    {
    printf("%d ",n);
    countdown(n-1);
    }
}
int main ()
{
    //Declaring and reading the integer from keyboard
    int n;
    scanf("%d",&n);
    //Calling the function
    countdown(n);
    printf("\n");
    return 0;
}