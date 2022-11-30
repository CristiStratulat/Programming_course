/*CH-230-A
    a1 p4.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
int main ()
{
    int x=17, y=4; //assigning 17 to x and 4 to y
    printf("x=%d\ny=%d\n",x,y);
    int sum;
    sum =x+y;
    printf("sum=%d\n",sum);
    int prod;
    prod=x*y;
    printf("product=%d\n",prod);
    int dif;
    dif =x-y;
    printf("difference=%d\n",dif);
    float div;
    div=(float)x/y;
    printf("division=%f\n",div);
    int reminder;
    reminder =x%y;
    printf("remainder of division=%d\n",reminder);
    return 0;
}