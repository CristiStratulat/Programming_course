/*
   CH-230-A
   a7_p1.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

//Declaring the struct for the linked list
struct linked_list {
    int value;
    struct linked_list *next;
};

//Declaring the prototypes of the functions used
struct linked_list* add_element_start (struct linked_list* list, int a);

struct linked_list* add_element_end (struct linked_list* list, int a);

struct linked_list* remove_first(struct linked_list *list);

void print_list (struct linked_list *list);

void dispose_list(struct linked_list* list);

