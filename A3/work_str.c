/*
    CH-230-A
    a3_p11.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int main ()
{
    //Declaring and reading the variables
    char one[150],two[150],c;
    int i,found=0;
    fgets(one,sizeof(one),stdin);
    fgets(two,sizeof(two),stdin);
    scanf("%c",&c);
    //Removing the new line when reading from keyboard
    one[strlen(one)-1]='\0';
    two[strlen(two)-1]='\0';
    //Printing the lenght with strlen function
    printf("length1=%lu\n",strlen(one));
    printf("length2=%lu\n",strlen(two));
    //Concatenating with strcat function and displaying the string
    printf("concatenation=%s\n",strcat(one,two));

    //Declaring the third array and copying two in it with strcpy
    char three[100];
    strcpy(three,two);
    //Print the array
    printf("copy=%s\n",three);
    //Using strcmp we display the result from comparison
    
    //We search c in the second string
    for(i=0;i<strlen(two);i++)
    {  
        if(two[i]==c)
            {

                printf("position=%d\n",i);
                found=1;
                break;
            }
    }
    if(found==0)
        printf("The character is not in the string\n");
    return 0;
}

