/*
   CH-230-A
   a7_p1.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/

//Using the header file
#include "linked_list.h"

//Function that adds a new element at the beginning of the list
struct linked_list* add_element_start (struct linked_list* list, int a)
{
    struct linked_list *new;

    //We allocate memory for the new node (new element of the list)
    new = (struct linked_list *) malloc (sizeof(struct linked_list));
    if(new ==NULL)
    {
        printf("Error allocating memory\n");
        return list;
    }
    /*
    We put the desired value/information and we make it point to the rest of 
    the list. We return new since this will be the new head of the list
    */
    new->value=a;
    new->next=list;

    return new;
}

//Function that adds a new element at the end of the list
struct linked_list* add_element_end (struct linked_list* list, int a)
{
    struct linked_list *new, *cursor;
    
    //We allocate memory for the new node (new element of the list)
    new = (struct linked_list *) malloc (sizeof(struct linked_list));
    if(new ==NULL)
    {
        printf("Error allocating memory\n");
        return list;
    }
    /*
    We put the value into the new node and we make it point to null since we 
    add the node at the end of the list 
    */
    new->value=a;
    new->next=NULL;
    //If the list is null we return the new node
    if(list==NULL)
        return new;

    /*
    Else we go thorugh the entire list and when we reach the last node we 
    make it point to the new node hence new will be the last node
    */
    cursor=list;
    while(cursor->next !=NULL)
        cursor=cursor->next;
    cursor->next=new;
    return list;
}

//Function that removes the first element from the list
struct linked_list* remove_first(struct linked_list *list)
{
    /*
    If the list has elements the second element will become the first.
    We return the list
    */
    if(list!=NULL)
        list=list->next;
    return list;
}

//Function that goes through the list and prints the elements
void print_list (struct linked_list *list)
{
    while(list!=NULL)
    {
        printf("%d ",list->value);
        list=list->next;
    }
    printf("\n");
}

/*
Function that frees the memory used by the list and quit the execution
of the program.
*/
void dispose_list(struct linked_list* list)
{
    struct linked_list *nextelem;
    while(list!=NULL)
    {
        nextelem=list->next;
        free(list);
        list=nextelem;
    }
    exit(0);
}
