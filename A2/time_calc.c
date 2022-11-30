/*
    CH-230-A
    a2-p3.c 
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

int main ()
{
    //Declaring the required variables and reading the data from keyboard
    int weeks,days,hours,total_hours;
    printf("Enter the number of weeks:\n");
    scanf("%d",&weeks);
    printf("Enter the number of days:\n");
    scanf("%d",&days);
    printf("Enter the number of hours:\n");
    scanf("%d",&hours);

    /*
    Computing the total number of hours and printing it
    We use this formula because a week has 7 days
    and a day has 24 hours
    */
    total_hours=(weeks*7)*24+days*24+hours;
    printf("The total number of hours is %d\n",total_hours);
    return 0;
}