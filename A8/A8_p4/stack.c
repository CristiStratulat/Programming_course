/*
   CH-230-A
   a8_p4.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "stack.h"

//Checking if the stack is empty (aka level 0)
int isEmpty(struct stack *a)
{
	if(a->count==0)
		return 1;
	else 
		return 0;
}

//Adding elements to the stack
void push(struct stack *a,int value)
{
	//If we are on level 12 the stack will overflow
	if(a->count==12)
		printf("Pushing Stack Overflow\n");
	else
	{
	//We add elements in the positions from [0..11]
	//printf("Pushing %d\n",value);
	a->count++;
	a->array[a->count-1]=value;
	}
}
//Function that pops an element
void pop(struct stack *a)
{
	//If the stuck is empty we get an error
	if(isEmpty(a)==1)
		printf("Popping Stack Underflow\n");
	else 
	{
	//We pop the current element
	printf("Popping %d\n",a->array[a->count-1]);
	a->array[a->count-1]=0;
	a->count--;
	}
}

//Function that is emptying the stack
void empty(struct stack *a)
{
	//Checking for Underflow error
	if(isEmpty(a)==1)
		printf("Emptying Stack Underflow\n");
	else
	{
		printf("Emptying Stack ");
		//Deleting all elements of the stack
		while(a->count>=1)
		{
			printf("%d ",a->array[a->count-1]);
			a->array[a->count-1]=0;
			a->count--;
		}
		printf("\n");
	}
}
/*
Function that I added for this problem specifically
Can be solved modifying the pop function but I made another function. 
The function prints the stack from the top to the bottom
*/
void print_stack (struct  stack *a)
{
	while(a->count>0)
		{
			printf("%d",a->array[a->count-1]);
			a->count--;
		}
}

