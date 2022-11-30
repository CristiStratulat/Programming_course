/*
    CH-230-A
    a3_p4.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/

#include <stdio.h>

int position (char str[], char c)
{
    int idx;
    /* Loop until end of string */
    /*
    I added ; (the empty statement) so that the for will execute.
    By definition for requires a block of statement to be executed.
    If we leave the row under the for empty, the for won't execute at all
    By adding the empty statement (;) (do nothing) the for will execute 
    */
    for (idx=0; str[idx]!=c && str[idx]!= '\0'; idx++)
        ; 
    /*do nothing*/
    return idx;
}
int main ()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line,sizeof(line),stdin);
        printf("The first occurence of 'g' is: %d\n",position(line,'g'));
    }
    return 0;
}