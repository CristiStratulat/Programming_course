/*
   CH-230-A
   a5_p11.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

/*
Function returning 1 for prime numbers and 0 for other numbers
We use the d parameter as the divisor. We loop through all the values
from x-1 to 2 (>1) and check if there is a divisor. If we find one 
we return 0 but if we don't we go to the next d prime(x,d-1);
*/
int prime (unsigned int x, int d)
{
    //If x is 1 we don't have to check we just return 0
    if(x==1)
        return 0;
    //If x is two we return 1; (2 is prime)
    if(x==2)
        return 1;
    //Else we check for the rest of the divisors
    if (x>2&&d>1)
    {
        //If we find a divisor we return 0 else we continue
        if(x%d==0)
            return 0;
        else
            return prime(x,d-1);
    }
    //If the function didn't return 0 we know that the number is prime
    return 1;
}
int main ()
{
    //Reading the number
    unsigned int x;
    scanf("%d",&x);

    //Calling the function an print the result according to the result
    if(prime(x,x-1)==0)
        printf("%d is not prime\n",x);
    else
        printf("%d is prime\n",x);
    return 0;
}