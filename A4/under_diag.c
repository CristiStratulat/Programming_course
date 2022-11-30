/*
   CH-230-A
   a4_p7.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>


//The definition of the function that displays the matrix on it's form
void display_matrix(int a[][30], int n)
{
    int i,j;
    printf("The entered matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}

/*
The definition of the function that displays the elements under the 
main diagonal. Elements on main diagonal respect the condition that 
i=j. Hence the elements under the main diagonal follow the rule that 
i<j
*/
void under_matrix(int a[][30], int n)
{
    int i,j;
    printf("Under the main diagonal:\n");
    for(i=0;i<n;i++)
        for(j=0;j<i;j++)
            printf("%d ",a[i][j]);
    printf("\n");
}

int main ()
{
    /*
    Declaring the matrix and the size of it. We use the variable i to loop 
    through the rows and j to loop through the columns
    We read the size n and the elements of the matrix
    */
    int n, a[30][30],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    //Calling both functions as required
    display_matrix(a,n);
    under_matrix(a,n);
    return 0;
}