/*
   CH-230-A
   a6_p4.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
//Defining the INTERMEDIATE directive
#define INTERMEDIATE
int main ()
{
    //Declaring the variables and reading n
    int n, *x,*y,i,s=0;
    scanf("%d",&n);
    //Based on n vale we dynamically allocate memory for the arrays
    x= (int *) malloc (sizeof(int)*n);
    y= (int *) malloc (sizeof(int)*n);
    if(x==NULL)
        {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    if(y==NULL)
        {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    
    //Reading elements of the arrays
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=0;i<n;i++)
        scanf("%d",&y[i]);
    
    /*
     Using Conditional Inclusion. If we delete the definition of the directive 
     above the part in between the ifdef and endif will not be executed
     In the INTERMEDIATE we print out the required intermediate values
    */
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for(i=0;i<n;i++)
        printf("%d\n",x[i]*y[i]);
    #endif

    //Printing the scalar product according to the definition in the problem
    for(i=0;i<n;i++)
       s=s+x[i]*y[i];
    printf("The scalar product is: %d\n",s);

    //Freeing the memory used for the x and y array
    free(x);
    free(y);

    return 0;
}