/*
   CH-230-A
   a8_p4.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "stack.h"
int main ()
{
	//Declaring the stack and initializing it on level 0
	struct stack a;
	a.count=0;
	//Declaring and reading the positive decimal number
	unsigned int x,rest;
	scanf("%d",&x);
	printf("The binary representation of %d is ",x);
	//Corner case if x=0 then the binary is 0. So we push 0 into the stack
	if(x==0)
		push(&a,0);
	else
	{
	while(x)
	{
		//We compute the rest
		rest=x%2;
		//We push the rest into the stack
		push(&a,rest);
		//We continue to devide by two until x=0
		x=x/2;
	}
	}
/*
Respecting the conversion from decimal to binary we print the stack 
from top to bottom hence we get the binary number 
*/
	print_stack(&a);
	printf(".\n");
    return 0;
}
