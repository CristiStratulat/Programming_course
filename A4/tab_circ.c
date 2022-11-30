/*
    CH-230-A
    a4_p1.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

//Library needed for using M_PI constant
#include <math.h>

int main ()
{
    //Declaring the required variables and reading the input from keyboard
    float start,stop,increment,i;
    scanf("%f%f%f",&start,&stop,&increment);

    /*
    We loop from the lower limit to upper limit at each step adding 
    the specified increment value. At each step we print on the screen
    the current value, the area and the perimeter of the circle 
    (math formulas)
    */
    for(i=start;i<=stop;i=i+increment)
        printf("%f %f %f\n",i,i*i*M_PI,2*i*M_PI);
        
    return 0;
}