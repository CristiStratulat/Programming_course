/*
   CH-230-A
   a5_p5.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//Function that returns the scalar product of two vectors
double vectors_product(double v[], double w[],int size)
{
    int i;
    double product;
    product=0;
    /*
    Looping through the elements of the vector and computing the 
    scalar product
    */
    for(i=0;i<size;i++)
        product = product + v[i]*w[i];
    return product;
}

//Function that searches for the maximum and the position it is on
void max_and_position (double v[], int size)
{
    int i,pos;
    double Max=-99999999999;
    for (i=0;i<size;i++)
        if(v[i]>Max)
        {
            //Storing the maximum value and the position it is on
            pos = i;
            Max=v[i];
        }
    //Displaying the corresponding message 
    printf("The largest = %lf\n",Max);
    printf("Position of largest = %d\n",pos);


}

//Function that searches for the minimum and the position it is on
void min_and_position (double v[], int size)
{
    int i,pos;
    double Min=99999999999;
    for (i=0;i<size;i++)
        if(v[i]<Min)
        {
            //Storing the minimum value and the position it is on
            pos = i;
            Min=v[i];
        }

    //Displaying the corresponding message 
    printf("The smallest = %lf\n",Min);
    printf("Position of smallest = %d\n",pos);


}

int main ()
{
    //Declaring, reading the size and allocating memory for the arrays
    int n,i;
    double *v,*w;
    scanf("%d",&n);

    v = (double *) malloc (sizeof(double)*n);
    w= (double *) malloc (sizeof(double)*n);

    if(v==NULL)
        exit(1);
    if(w==NULL)
        exit(1);

    //Reading the components of the vector and storing them in arrays 
    for(i=0;i<n;i++)
        scanf("%lf",&v[i]);
    for(i=0;i<n;i++)
        scanf("%lf",&w[i]);
    
    //Calling the functions to get the results in the desired order
    printf("Scalar product=%lf\n",vectors_product(v,w,n));
    min_and_position(v,n);
    max_and_position(v,n);
    min_and_position(w,n);
    max_and_position(w,n);

    //Free the memory
    free(v);
    free(w);
    return 0;
}