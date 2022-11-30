/*
   CH-230-A
   a5_p6.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    //Declaring the required variables and reading the size of the array
    int n,i;
    float *arr,*p;
    scanf("%d",&n);

    arr = (float *) malloc (sizeof(float)*n);
    if(arr==NULL)
        exit(1);

    //Reading the elements of the array
    for(i=0;i<n;i++)
        scanf("%f",&arr[i]);
    //looping through the array using the pointer
    for(p=arr;p<arr+n;p++)
    //when we find the negative value we stop
        if(*p<0)
            break;
    /*
    In the p value we stored the memory address of the negative value from
    the array (equivalent to arr[i], where i is the position of the negative
    value)
    In arr we have stored the address of the first element of the array
    (equivalent to arr[0])
    When we substract from p arr we will obtain the number of elements before
    the first negative value 
    */
    printf("Before the first negative value:%ld elements\n",p-arr);

    //Deallocate memory of the array
    free(arr);
    
    return 0;
}