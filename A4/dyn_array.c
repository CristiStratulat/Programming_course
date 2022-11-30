/*
   CH-230-A
   a4_p9.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
Definition of a function that computes the product of the largest 
and the smallest element of an array of integers
*/
int prodminmax(int arr[], int n)
{
    int Min=INT_MAX,Max=INT_MIN,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>Max)
            Max=arr[i];
        if(arr[i]<Min)
            Min=arr[i];
    }
    return Min*Max;
}


int main ()
{
    //Declaring the required variables and reading the size of the array
    int *arr,n,i;
    scanf("%d",&n);

    //Dynamically allocating memory for the array
    arr =(int *) malloc (sizeof(int)*n);

    //Check that the function returns a valid pointer
    if(arr==NULL)
        exit(1);

    //Reading the elements of the array
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    //Calling and printing the required product
    printf("The smallest * largest element = %d\n",prodminmax(arr,n));

    //Releasing the memory
    free(arr);
    return 0;
}