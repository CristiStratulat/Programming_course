/*
    CH-230-A
    a2-p4.c 
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
int main ()
{
    //Declaring and reading the required variables.
    float a,b,h,square_area,rectangle_area,triangle_area,trapezoid_area;
    scanf("%f%f%f",&a,&b,&h);
    //We compute the required areas using the specific formulas
    square_area=a*a;
    rectangle_area=a*b;
    triangle_area=(a*h)/2;
    trapezoid_area=(a+b)/2*h;
    
    /*
    After computing and saving the areas in specific variables 
    we print them on screen
    */
    printf("square area=%f\n",square_area);
    printf("rectangle area=%f\n",rectangle_area);
    printf("triangle area=%f\n",triangle_area);
    printf("trapezoid area=%f\n",trapezoid_area);
    return 0;
}