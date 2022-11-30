/*
   CH-230-A
   a7_p7.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include "stack.h"
int main ()
{
	//Declaring the stack and initializing it on level 0
	struct stack a;
	a.count=0;
	char ch;
	int x;
	while(1)
	{
		//Reading the characters and evaluate all cases
		scanf("%c",&ch);
		switch (ch)
		{
			//For s we push an element into the stack
			case 's':
				scanf("%d",&x);
				push(&a,x);
				break;
			//For p we pop an element
			case 'p':
				pop(&a);
				break;
			//For e we empty the list
			case 'e':
				empty(&a);
				break;
			//For q we quit the executions
			case 'q':
				printf("Quit\n");
				exit(0);
				break;

		}
	}
    return 0;
}