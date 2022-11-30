/*
   CH-230-A
   a7_p1.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/

//Using the header file
#include "linked_list.h"

int main ()
{
    //Declaring the list and the required variables
    struct linked_list *list=NULL;
    char c;
    int a;
    do
    {
    /*
    We read the character and we use the switch to go through all 
    cases mentioned in the problem.
    */
    scanf("%c",&c);
    switch(c)
    {
    //If the char is 'a' we read an integer and add it at the end of the list
        case 'a':
            scanf("%d",&a);
            list=add_element_end(list,a);
            break;
    /*
    If the char is 'b' we read an integer and add it at the beggining of 
    the list.
    */
        case 'b':
            scanf("%d",&a);
            list=add_element_start(list,a);
    //If the char is 'r' we remove the first element of the list
            break;
        case 'r':
            list=remove_first(list);
            break;
    //If the char is 'p' we print the list
        case 'p':
            print_list(list);
            break;
//If the char is 'q' we free the memory and quit the execution of the program
        case 'q':
            dispose_list(list);
            break;
    }
    }while(c!='q'); //we stop reading characters when we read 'q' already
    
    return 0;
}