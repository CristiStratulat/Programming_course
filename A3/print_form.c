/*
    CH-230-A
    a3_p7.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

//Prototype of the function
void print_form(int n, int m, char c);


int main ()
{
    //Declaring and reading the required variables
    int n,m;
    char c;
    scanf("%d\n%d\n%c",&n,&m,&c);
    
    //Calling the function
    print_form(n,m,c);
}
// Writing the function definition
void print_form(int n, int m, char c)
{
    int i,j;
    //Looping through the rows
    for(i=1;i<=n;i++)
    {
        /*
        looping throught the columns (each column 
        will have m+i-1 characters(math proof)(formula in the statement))
        */
        for(j=1;j<=m+i-1;j++)
            printf("%c",c);
        printf("\n");
    }
}