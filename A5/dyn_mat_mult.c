/*
   CH-230-A
   a5_p8.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//Function that reads a matrix from the keyboard
void reading_matrix(int **matrix,int size)
{
    //Reading a 2D matrix iterating first thorugh rows then columns
    int i,j;
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            scanf("%d",&matrix[i][j]);
}

//Function that prints a 2D Matrix to keyboard
void print_matrix (int **matrix, int size)
{
    //Performing a standard 2D Matrix printing
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }
}

void product_computing (int **A,int **B, int **C,int n,int m,int p)
{
    int i,j,k;
    //The first two loops are used to iterate through the result matrix
    for(i=0;i<n;i++)
    {
        for(k=0;k<p;k++)
        {
//We use the third loop to iterate thorugh A and B matrices so we can compute
//the result of the element [i][k] in C matrix (logical proof)
            for(j=0;j<m;j++)
                C[i][k]=C[i][k]+A[i][k]*B[k][j];
            
        }
    }
}
int main ()
{
    //Declaring and reading the dimensions
    int **A,**B,**C,n,m,p,i;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&p);

    //Allocating memory for matrix A (input matrix)
    A=(int **) malloc (sizeof(int *)*n);
    if(A==NULL)
        exit(1);
    for(i=0;i<n;i++){
        A[i]=(int *) malloc (sizeof(int)*n);
        if(A[i]==NULL)
            exit(1);
    } 

    //Allocating memory for matrix B (input matrix)
    B=(int **) malloc (sizeof(int *)*m);
    if(B==NULL)
        exit(1);
    for(i=0;i<n;i++){
        B[i]=(int *) malloc (sizeof(int)*m);
        if(B[i]==NULL)
            exit(1);
    } 

    //Allocating memory for matrix C (result matrix)
    C=(int **) malloc (sizeof(int *)*p);
    if(C==NULL)
        exit(1);
    for(i=0;i<n;i++){
        C[i]=(int *) malloc (sizeof(int)*p);
        if(C[i]==NULL)
            exit(1);
    } 
    //Reading the A and B matrix
    reading_matrix(A,n);
    reading_matrix(B,m);

    //Computing the C matrix
    product_computing(A,B,C,n,m,p);
    
    //Printing all matrices (A,B and AxB)
    printf("Matrix A:\n");
    print_matrix(A,n);

    printf("Matrix B:\n");
    print_matrix(B,m);

    printf("The multiplication result AxB:\n");
    print_matrix(C,p);

    //Free memory of  A,B and C matrix
    for(i=0;i<n;i++)
        free(A[i]);
    free(A);

    for(i=0;i<m;i++)
        free(B[i]);
    free(B);

    for(i=0;i<p;i++)
        free(C[i]);
    free(C);
    return 0;
}