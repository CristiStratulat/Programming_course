/*
   CH-230-A
   a5_p2.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

//Function that divides all elements of the array by 5 
void divby5 (float arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
        arr[i]=arr[i]/5;
}

int main ()
{   
    //Declaring the array with the predefined elements 
    float arr[]={5.5,6.5,7.75,8.0,9.6,10.36};
    int i;
    
    //Printing the array before division
    printf("Before:\n");
    for(i=0;i<6;i++)
        printf("%.3f ",arr[i]);

    //Printing the array after division
    printf("\nAfter:\n");
    divby5(arr,6);
    for(i=0;i<6;i++)
        printf("%.3f ",arr[i]);
    printf("\n");
    return 0;
}