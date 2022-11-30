/*
    CH-230-A
    a2-p9.c 
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    //Declaring and reading the character
    char c;
    scanf("%c",&c);

    /*
    There are three cases: c is letter, c is digit, c is some other symbol
    In the first branch of the if we check if c is a letter 
    The comparison of c with the letters is made in terms of ASCII codes
    this is why the code is valid.
    In the second branch we check if c is a digit
    Again the comparison is made in terms of ASCII codes
    We can make this comparison of c with letter and digits because
    they are consecutive in ASCII table. 
    (example:if c is between A&Z, cis letter; the same for other cases)
    In the third brach we are sure that it is some other symbol 
    as it did not enter the first two branches
    */
    if(('A'<=c&&c<='Z')||('a'<=c&&c<='z'))
        printf("%c is a letter\n",c);
    else if ('0'<=c&&c<='9')
        printf("%c is a digit\n",c);
    else
        printf("%c is some other symbol\n",c);
    return 0;
}