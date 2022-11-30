/*
    CH-230-A
    a2-p1.c 
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
int main ()
{
    /*
    Declaring variables for the input
    I declared them all at the top of the program because
    all the input is read at once
    */
    double a,b;
    int c,d;
    char e,f;
    scanf("%lf%lf",&a,&b);
    scanf("%d%d",&c,&d);
    getchar();
    scanf("%c\n%c",&e,&f);

    /*
    Declaring variables and computing
    the sum, the difference and square of the doubles.
    After computing each operation we print the required result
    */
    double sum,dif,square_a;
    sum=a+b;
    printf("sum of doubles=%lf\n",sum);
    dif=a-b;
    printf("difference of doubles=%lf\n",dif);
    square_a=a*a;
    printf("square=%lf\n",square_a);
    
    /*
    Computing and printing the sum and product of integers
    */
    int sum_intigers,prod_intigers;
    sum_intigers=c+d;
    printf("sum of integers=%d\n",sum_intigers);
    prod_intigers=c*d;
    printf("product of integers=%d\n",prod_intigers);

    /* 
    Computing the sum and product of the chars.
    We made the sum and the product integers.
    When printing we displayed the sum and product as integers and characters.
    */
    int sum_char,prod_char;

    //converting the sum and product of chars into integer
    sum_char=(int)(e+f); 
    prod_char=(int)(e*f); 

    //displaying the sum and product as an integer (%d)
    printf("sum of chars=%d\n",sum_char); 
    printf("product of chars=%d\n",prod_char);

    //displaying the sum and product as char (%c)
    printf("sum of chars=%c\n",sum_char); 
    printf("product of chars=%c\n",prod_char);
    return 0;
}