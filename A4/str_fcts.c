/*
   CH-230-A
   a4_p12.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

//Function that replaces all occurrences of c with e
void replaceAll (char *str, char c, char e)
{
    int i;
    //We loop through all characters and replace c with e
    for(i=0;i<strlen(str);i++)
        if(str[i]==c)
            str[i]=e;
    printf("New string: %s\n",str);
}
int main ()
{
    char str[80],c,e;
    //We introduce the first string and check if it's valid (while condition)
    printf("Introduce a new string:\n");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';

    while(strcmp(str,"stop")!=0)
    {
       printf("Character to be replaced:\n");
        scanf("%c",&c);
    //We use getchar() to remove the newlines else we will encounter issues
        getchar();
        printf("Replacing character:\n");
        scanf("%c",&e);
        getchar();
        printf("The original string: %s\n",str);
        //Calling the function
        replaceAll(str,c,e);

        /*
        After we printed the result we read a new string.
        We will check if it is valid in the while condition. If it is
        the loop will continue else we stop
        */

        printf("Introduce a new string:\n");
        fgets(str,sizeof(str),stdin);
        str[strlen(str)-1]='\0';
    }
    return 0;
}