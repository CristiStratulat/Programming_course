/*CH-230-A
    a1 p2.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
/*
The problem in this case is that we do not provide the %d "gap" the result,
hence the %d will just assign random int values from the memory.
So by adding ,result the printf will work
*/
#include <stdio.h>
int main() 
    {
    int result; //The result of our calculation
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n",result); // added here ,result
    return 0;
    }