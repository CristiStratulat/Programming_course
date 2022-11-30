/*
   CH-230-A
   a7_p2.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

/*
Creating the struct for a node in a double linked list.
We take pointer *prev and *next to link the list in both ways
*/
struct Node {
    char c;
    struct Node *prev,*next;
};

//Prototype of the functions
struct Node* add_element_start(struct Node *list, char x);
struct Node* remove_appearances (struct Node *list, struct Node *del);
void print_list (struct Node *list);
void print_reverse (struct Node *list);
void dispose(struct Node *list);

//Function that adds a value in the beggining of a double linked list
struct Node* add_element_start(struct Node *list, char x)
{
	//Creating the new node and allocating memory dynamically
    struct Node *new;

    new = (struct Node *) malloc (sizeof(struct Node));
	//Check for memory allocation error
    if(new ==NULL)
    {
        printf("Error allocating memory\n");
        return list;
    }

	//Putting the value in the list and linking it to previous (NULL)
    new->c=x;
    new->prev=NULL;
    new->next=list;

	//If the list is null the list will be just the new node
    if(list==NULL) 
        return new;

	//If the list exists we link the new node to the next node
    list->prev=new;
	
	//As new is the new first node we return it
    return new;
} 

//Function that prints the elements of the list
void print_list(struct Node *list)
{
    while(list!=NULL)
    {
        printf("%c ",list->c);
        list=list->next;
    }
    printf("\n");
}

//Function that removes a specific node from the linked list
struct Node* remove_appearances(struct Node *list, struct Node *del)
{
	//If the node we want to delete is the head
    if(list==del)
        list=del->next;
	//If we can link it to the next node
    if(del->next!=NULL)
        del->next->prev=del->prev;
	//If we can link it to the previous node
    if(del->prev!=NULL)
        del->prev->next=del->next;
	//Freeing the node we deleted and returning the list
    free(del);
    return list;
}

//Recursive function that is printing the elements of the list reversed
void print_reverse (struct Node *list)
{
	//As long as there are still nodes we loop through the list
    if(list->next!=NULL)
        print_reverse(list->next);
	/*
	Once we hit the last node we print the value and the recursive function
	will go backwards.
	*/
    printf("%c ",list->c);
}

//Function that stops the execution of the program and frees the list
void dispose(struct Node *list)
{
    struct Node *next;
    while(list!=NULL)
    {
        next=list->next;
        free(list);
        list=next;
    }
    exit(0);
}

int main ()
{
	//Declaring the list and the required variables
    struct Node *list=NULL;
    int n;
    char x;
    do
    {
	//We read an integer value as required and we take all possible cases
        scanf("%d",&n);
        switch (n)
        {
			//For 1 we add an element in the beggining
            case 1:
                getchar();
                scanf("%c",&x);
                list = add_element_start(list,x);
                break;
			/*
			For 2 we need to remove all appearances of a given character in 
			the list. We loop through the list and everytime we find 
			the character we delete the current node (the node where the 
			character appears)
			*/
            case 2:
                getchar();
                scanf("%c",&x);
                struct Node *cursor;
		//By using the ok we check that we have at least one appearance of x
                int ok=0;
                cursor=list;
                while(cursor!=NULL)
                    {
                        if(cursor->c==x)
                        {
                            list=remove_appearances(list,cursor);
                            ok=1;
                        }
                        cursor=cursor->next;
                    }
			//If ok==0 we don't have appearances
                if(ok==0)
                    printf("The element is not in the list!\n");
                break;
			//For 3 we print the list
            case 3:
                print_list(list);
                break;
			//For 4 we print the list in reverse
            case 4:
                print_reverse(list);
                printf("\n");
                break;
			//For 5 we free the list and stop the program
            case 5:
                dispose(list);
                break;
        }
     }while (n!=5);
   return 0;
}