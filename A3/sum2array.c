/*
    CH-230-A
    a3_p9.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/

#include <stdio.h>
//Function prototype
double sum25 (double v[],int n);
int main ()
{
    //Declaring the variables and reading the numbers
    int n,i;
    double x,v[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&x);
        //We put the numbers into the array
        v[i]=x;
    }
    /*
    Check if the function returned a valid sum or not, as mentioned
    in statement
    */
    if(sum25(v,n)==-111)
        printf("One or both positions are invalid\n");
    else
        printf("sum=%lf\n",sum25(v,n));
    return 0;
}
//Definition of the required function
double sum25 (double v[], int n)
{
    /*
    If n>5 mean that both position 2 and 5 will have valid numbers
    hence we print the sum. Else we print -111
    */
    if (n>5)
        return v[2]+v[5];
    else
        return -111;
}