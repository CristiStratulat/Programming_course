/*
   CH-230-A
   a4_p6.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//Function that returns the biggest value of an array
int Max1(int v[],int n)
{
    int i, Max1=INT_MIN;
    for(i=0;i<n;i++)
        if(v[i]>Max1)
            Max1=v[i];    
    return Max1;
}

//Function that returns the second biggest value of an array
int Max2(int v[],int n)
{
    int i,Max2=INT_MIN;
    for(i=0;i<n;i++)
        if(v[i]>Max2&&v[i]<Max1(v,n))
            Max2=v[i];
    return Max2;
}

int main ()
{
    /*
    Declaring the required variables and we read from the keyboard the size
    of the array
    */
    int *v,n,i;
    scanf("%d",&n);
    // We allocate the required memory dynamically
    v= (int *) malloc(sizeof(int)*n);
    //We check to be sure malloc() returned a valid pointer
    if(v==NULL)
        exit(1);
    //We read the integers from the keyboard and store them in the array
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    
    //We print the biggest and second biggest values by calling the functions

    printf("The biggest value is %d\n",Max1(v,n));
    printf("The second biggest value is %d\n",Max2(v,n));

    //At the end we release the memory
    free(v);
    return 0;
}