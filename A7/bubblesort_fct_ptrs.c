/*
   CH-230-A
   a7_p6.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//Declaring the required struct for person
struct person 
{
	char name[30];
	int age;
};

/*
Comparison function that compares two strings(names of the person).
If the names are not ordered the function will return 1.
If the names are the same we compare the ages. If the ages are not 
ordered we return 1. In all the remaining cases we don't need to do anything
so we return 0
*/
int compare_name(const struct person a, const struct person b)
{
	if(strcmp(a.name,b.name)>0)
		return 1;
	else if (strcmp(a.name,b.name)==0)
	{
		if(a.age>b.age)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}

/*
Comparison function that compares two integers (age).
If the age are not ordered we return 1.
If the ages are equal we compare the names.
If the names are not ordered we return 1.
In all other cases we don't need to do anything so we return 0
*/
int compare_age(const struct person a, const struct person b)
{
	if(a.age>b.age)
		return 1;
	else if (a.age==b.age)
	{
		if(strcmp(a.name,b.name)>0)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}

/*
Bubblesort function that takes the array of persons and by using 
function pointers we call the specific comparisons function when we need.
By calling the different comparison function we get the persons orderd
in the required way
*/
void bubblesort(struct person *arr, int n, 
int (*func)(const struct person a, const struct person b))
{
	int i;
	bool swapped=true;
	do
	{
		swapped=false;
		for(i=1;i<=n-1;i++)
		{
			if(func(arr[i-1],arr[i])>0)
			{
				struct person aux;
				aux=arr[i-1];
				arr[i-1]=arr[i];
				arr[i]=aux;
				swapped=true;
			}
		}
	} while (swapped);
	
}

//We print the array of persons
void print_str(struct person *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
			printf("{%s, %d}; ",arr[i].name,arr[i].age);
	printf("\n");
}

int main ()
{	
	//Declaring the required variables and reading the size of the array
	int n,i;
	struct person *arr;
	scanf("%d",&n);

	//Allocating memory
	arr = (struct person*) malloc (sizeof(struct person)*n);
	if(arr==NULL)
	{
		printf("Memory allocation error\n");
		exit(1);
	}

	//We read the elements of the struct array
	for(i=0;i<n;i++)
		{
		getchar();
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strlen(arr[i].name) - 1] = '\0';
        scanf("%d", &(arr[i].age));
		}
	
	//Sorting and printing according to name
	bubblesort(arr,n,compare_name);
	print_str(arr,n);

	//Sorting and printing according to age
	bubblesort(arr,n,compare_age);
	print_str(arr,n);

	//We free the array
	free(arr);
	return 0;
}