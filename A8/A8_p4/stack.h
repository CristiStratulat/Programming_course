/*
   CH-230-A
   a8_p4.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
//Declaring the struct definition
struct stack 
{
	unsigned int count;
	int array[12];       //Container
};

//Declaring all the function prototypes
int isEmpty (struct stack *a);
void push(struct stack *a,int value);
void pop(struct stack *a);
void empty(struct stack *a);

//Function added for A8 problem 4
void print_stack (struct  stack *a);