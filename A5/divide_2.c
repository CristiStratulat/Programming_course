/*
   CH-230-A
   a5_p4.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//Function that divides all elements of the array by 5 
void divby5 (float arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
        arr[i]=arr[i]/5;
}
int main ()
{
    //Declaring the variables and reading the size of the array
    int n,i; 
    float *arr;
    scanf("%d",&n);
    
    //Allocating memory dynamically
    arr = (float *) malloc (sizeof(float)*n);
    if(arr == NULL)
        exit(1);

    //Reading elements of the array
    for(i=0;i<n;i++)
        scanf("%f",&arr[i]);
    
    //Printing the array before division
    printf("Before:\n");
    for(i=0;i<n;i++)
        printf("%.3f ",arr[i]);

    //Printing the array after division
    printf("\nAfter:\n");
    divby5(arr,6);
    for(i=0;i<n;i++)
        printf("%.3f ",arr[i]);
    printf("\n");

    //Free the memory
    free(arr);

    return 0;
}