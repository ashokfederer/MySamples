#include <stdio.h>
#include <stdlib.h>
struct stack
{
	int data;
	struct stack* next;
}*top=NULL;

void push(int data)
{
	struct stack* temp;
	temp = (struct stack*)malloc(sizeof(struct stack));
	temp->data=data;
	if(top==NULL)
	{
		top = temp;	
	}
	else
	{
		temp->next=top;
		top = temp;
	}
}	
	
int pop()
{
	int data;
	struct stack* temp;
	temp = top;
	data = top->data;
	top = top->next;
	free(temp);
	return data;
}

int peek()
{
	return top->data;
}

int main(void) {
	// your code goes here
	int res1,res2;
	push(10);
	push(5);
	push(15);
	res1=pop();
	res2=peek();
	printf("%d   %d",res1,res2);
	return 0;
}
