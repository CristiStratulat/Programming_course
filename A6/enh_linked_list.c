/*
   CH-230-A
   a6_p9.c
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


//Function that returns the length of the list 
int length_list(struct linked_list *list)
{
    int n=1;
    struct linked_list *cont;
    cont=list;
    while(cont!=NULL)
        {
            cont=cont->next;
            n++;
        }
    return n-1;
}

//Function that inserts an element in the list at the desired position
struct linked_list* add_element_pos (struct linked_list *list,int pos, int a)
{
    struct linked_list *new,*crt,*prev;
    int cnt=0;
    //Checking if the position we want to insert into is valid
    if (pos<0||pos>length_list(list)-1)
    {
        printf("Invalid position!\n");
        return list;
    }
    //We allocate memory for the new node (new element of the list)
    new = (struct linked_list *) malloc (sizeof(struct linked_list));
    if(new ==NULL)
    {
        printf("Error allocating memory\n");
        return list;
    }
    
    new->value=a;
    
    /*
    We use two variables crt and prev (current and previous) and loop through 
    the list until current is on the position we want to insert the value.
    The new value will be situated between the current and previous so we 
    link previous to the new one and the new one to the current (current will 
    be on the position +1)
    */
    prev=NULL;
    crt=list;
    while(cnt!=pos)
    {
        prev=crt;
        crt=crt->next;
        cnt++;
    }
    prev->next=new;
    new->next=crt;
    return list;
}

//Function that reverses the list
struct linked_list* reverse (struct linked_list *list)
{
    //We use three pointers to keep reversing the list and moving forward
    struct linked_list *prev,*crt,*next;
    prev=NULL;
    crt=list;
    next=NULL;

    //As long as on the current position we have an element
    while(crt!=NULL)
    {
        //We make the next to be on the next position
        next=crt->next;
        //We reverse the node in the current position
        crt->next=prev;
        //we move forward through the loop
        prev=crt;
        crt=next;
    }
    /*
    As we reversed the list we are returning previous since current stopped
    because of the for and in prev we will have the reversed linked list
    */
    return prev;

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
    int a,pos;
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
    //If the char is 'i' we add an element at the desired position        
        case 'i':
            scanf("%d%d",&a,&pos);
            add_element_pos(list,a,pos);
            break;
    //If the char is 'R' we reverse the list
        case 'R':
            list=reverse(list);
            break;
    }
    }while(c!='q'); //we stop reading characters when we read 'q' already
    
    return 0;
}