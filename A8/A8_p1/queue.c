/*
   CH-230-A
   a8_p2.c
   Cristian-Mihai Stratulat
   cr.stratulat@jacobs-university.de
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	//If queue is full we do nothing
	if(queue_is_full(pq))
		return -1;

	//Create a new node and allocate memory
	Node *newnode=NULL;

	newnode= (Node *) malloc (sizeof(Node));
	if(newnode==NULL)
	{
		printf("Memory allocation problem\n");
		return -1;
	}

	//Copy the item to the node
	newnode->item=item;

	//Set next pointer to NULL
	newnode->next=NULL;

	//We set the front node if the queue is empty
	if(pq->front==NULL)
		pq->front=pq->rear=newnode;
	else //If queue already exists we set the rear node
		pq->rear->next=newnode;
	//We set the new rear
	pq->rear=newnode;
	//We increment the item count
	pq->items++;
        return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	//We declare and allocate memory for an auxiliar node
	Node *temp;
	temp=(Node *) malloc (sizeof(Node));
	if(temp==NULL)
	{
		printf("Memory allocation problem\n");
		return -1;
	}
	//If queu is empty do not do anything
	if(queue_is_empty(pq))
		return -1;
	
	//We store in temp the first node of the queue (that we will delete)
	temp=pq->front;
	//Copy item to waiting variable
	*pitem=pq->front->item;
	
	//Reset front pointer to the next item in queue
	pq->front=pq->front->next;

	//We free the memory of the node we just removed
	free(temp);

	//If the last item is removed we resent front and rear pointers
	if(pq->items==1)
		pq->front=pq->rear=NULL;
	
	//Decrement item count
	pq->items--;
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

