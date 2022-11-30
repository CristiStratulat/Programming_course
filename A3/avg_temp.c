/*
    CH-230-A
    a3_p5.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

int main ()
{
    //Declaring variables and reading the required input
    char c;
    int n,i;
    double x, v[100],F;
    double sum=0;
    scanf("%c",&c);
    scanf("%d",&n);

    /* 
    Reading the n values in the x variable
    We make the sum of the tempretures as it is required for the 's' case 
    and for the default case. After adding the value to the sum we store 
    the value in the array v.
    */
    for(i=0;i<n;i++)
    {
        scanf("%lf",&x);
        sum=sum+x;
        v[i]=x;
    }
    //using the switch for all the cases as required
    switch (c)
    {
        //Printing the sum of the temperatures
        case 's':
            printf("%lf\n",sum);
        break;
        //Printing the list of all temperatures
        case 'p':
        for(i=0;i<n;i++)
            printf("%lf\n",v[i]);
        break;
        /*
        Iterating through all tempretures, converting them into Fahrenheit
        and printing them as required
        */
        case 't':
        for(i=0;i<n;i++)
            {
               F=(double)((v[i]*9)/5+32); 
               printf("%lf\n",F);
            }
        break;
        /*
        The average of the temperature (sum already generated and we know
        from the input the number of temperatures store (n))
        */
        default:
            printf("%lf\n",sum/n);
    }
    return 0;
}