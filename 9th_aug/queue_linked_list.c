#include <stdio.h>
#include <stdlib.h>
 

typedef struct QNode {
    int data;
    struct QNode* next;
}QNode;

QNode *front=NULL;
QNode *rear=NULL;

void enqueue(int data)
{
	QNode *temp;
	temp=(QNode *)malloc(sizeof(QNode));
	temp->data =data;
	temp->next =NULL;
	
	if(front ==NULL && rear ==NULL)
	{
	front=temp;
	rear=temp;
	}
	else
	{
	rear->next=temp;
	rear=temp;
	}
}

void dequeue()
{
QNode *temp;
	temp=front;
	if(front ==NULL &&rear ==NULL)
		printf("List is empty\n");
	
	
	else
	{
		front=front->next;
		free(temp);
		temp=NULL;
	}
}

void display()
{
	QNode *p;
	if(front ==NULL &&rear ==NULL)
		printf("List is empty\n");
	
	else
	{
	    p=front;
		while(p != NULL)
		{
			printf("\t%d",p->data);
			p=p->next;
		}
	}
	printf("\n");
}
	
int main()
{
		enqueue(5);
		enqueue(4);
		enqueue(3);
		display();
		dequeue();
		display();
		return 0;
}