/*
   CH-230-A
   a6_p8.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//Declaring the struct for the linked list
struct linked_list {
    int value;
    struct linked_list *next;
};

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