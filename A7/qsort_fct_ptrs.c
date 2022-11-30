/*
   CH-230-A
   a7_p5.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//Comparison function for ascending order
int compare_ascending (const void *va, const void *vb)
{
	const int* a = (const int*) va;
	const int* b = (const int*) vb;
	if(*a<*b) return -1;
	else if (*a>*b) return 1;
	else return 0;
}

//Comparison function for descending order
int compare_descending (const void *va, const void *vb)
{
	const int* a = (const int*) va;
	const int* b = (const int*) vb;
	if(*a>*b) return -1;
	else if (*a<*b) return 1;
	else return 0;
}

/*
Function that frees the memory of the array and end the execution of 
the program.
*/
void stop (int *v)
{
	free(v);
	exit(0);
}

/*
Function that sorts the array using qsort and prints it. The function 
has a function pointer as a parameter that allows us to call the desired 
comparison function hence to get the desired result
*/
void print_arr (int *v,int n, int (*func)(const void *va, const void *vb))
{
	qsort(v,n,sizeof(v[0]),func);
	int i;
	for(i=0;i<n;i++)
		printf("%d ", v[i]);
	printf("\n");
}

int main ()
{
	//Declaring and reading the required variables
	int *v, n,i;
	char c;

	scanf("%d",&n);

	//Allocating memory for the array
	v= (int *) malloc (sizeof(int)*n);
	if(v==NULL)
		{
			printf("Memory allocation failed!\n");
			exit(0);
		}
	
	//Reading the elements of the array
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);

	while(1)
	{
		/*
		We read the character and using a switch statement we call the 
		print_arr function with the required comaprison function as an 
		argument.
		*/
		scanf("%c",&c);
		switch (c)
		{
		case 'a':
			print_arr(v,n,compare_ascending);
			break;
		
		case 'd':
			print_arr(v,n,compare_descending);
			break;
		case 'e':
			stop(v);
			break;

		}
	}
   	return 0;
}