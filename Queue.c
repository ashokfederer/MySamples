#include <stdio.h>
struct queue
{
	int data;
	struct queue* next;
}*front=NULL,*rear=NULL;

void enqueue(int data)
{
	struct queue* temp;
	temp = (struct queue*)malloc(sizeof(struct queue));
	temp->data = data;
	if(front == NULL)
	{
		temp->next = NULL;
		front = temp;
		rear = temp;
	}
	else
	{
		temp->next=front;
		front = temp;
	}
	printf("%d\n",front->data);
}

void dequeue()
{
	printf("%d\n",rear->data);
	struct queue* temp;
	temp = front;
	while(temp->next != rear)
	{
		temp = temp->next;
	}
	rear = temp;
	temp = temp->next;
	free(temp);
	
}

int main(void) {
	// your code goes here
	enqueue(10);
	enqueue(5);
	enqueue(14);
	dequeue();
	dequeue();
	return 0;
}
