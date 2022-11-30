/*
   CH-230-A
   a5_p9.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//Function for reading all elements of the matrix
void read_matrix(int ***arr,int n,int m,int o)
{
    int i,j,k;
    /*
    Reading elements respecting the following order
    Iterating first through rows, then coumns and then depth 
    */
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            for(k=0;k<o;k++)
                scanf("%d",&arr[i][j][k]);
}

void print_matrix(int ***arr,int n,int m,int o)
{
    int i,j,k;
    //Iterating thorugh depth
        for(k=0;k<o;k++)
        {
//2D sections parallel to XOY axis means that we iterate thorugh depth first
//the k level of depth represents the k+1 section parallel to XOY
            printf("Section %d:\n",k+1);
//Iterating in a normal way through a 2d Matrix (rows then columns)
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
        //Printing the resulting 2d matrix corresponding to the k+1 section
                    printf("%d ",arr[i][j][k]);
                printf("\n");
            }
        }
}
int main ()
{
    int ***arr,i,j,n,m,o;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&o);

    //Allocating memory for a 3d Matrix of sizes n*m*o
    arr= (int ***) malloc (sizeof(int **) *n);
    if(arr==NULL)
        exit(1);
    for(i=0;i<n;i++)
    {
        arr[i]= (int **) malloc(sizeof(int *)*m);
        if(arr[i]==NULL)
            exit(1);
        for(j=0;j<m;j++)
        {
            arr[i][j]=(int *) malloc (sizeof(int)*o);
            if(arr[i][j]==NULL)
                exit(1);
        }
            
    }
    //Calling the function for reading the matrix
    read_matrix(arr,n,m,o);
    //Calling the function to print the desired result
    print_matrix(arr,n,m,o);

    //Free memory
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
    return 0;
}