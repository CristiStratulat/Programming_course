/*
   CH-230-A
   a5_p1.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>

void triangle (int n, char ch)
{
/*
    We observe that the triangle pattern is the following:
    -There are n lines 
    -on each line we see that we can deduce the following forumla:
    there are n-i characters on the line i;
    */ 
   int i,j;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n-i;j++)
                printf("%c",ch);
            printf("\n");
        }
}
int main ()
{   
    //Declaring the required variables and reading the input
    int n;
    char ch;

    scanf("%d",&n);
    getchar();
    scanf("%c",&ch);

    //Calling the function
    triangle(n,ch);

    return 0;
}