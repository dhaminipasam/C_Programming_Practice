#include<stdio.h>
#include<stdlib.h>


typedef struct node{
	int data;
	struct node *next;
	}node;
	
	
node *addtoempty(char data)
{

	node *temp=(node *)malloc(sizeof(node));
	temp->data=data;
	temp->next=temp;
	return temp;
	
}

node *addatend(node *tail,char data)
{
node *newp=malloc(sizeof(node));
newp->data=data;
newp->next=NULL;
newp->next=tail->next;
tail->next=newp;
tail=tail->next;
return tail;
}

void print(node *tail)
{
    node *temp=tail->next;
do{
printf("%c ->\n",temp->data);
temp=temp->next;
}while(temp != tail->next);
}

	
int main()
{
 node *tail;
 tail=addtoempty('a');
 tail=addatend(tail,'e');
 tail=addatend(tail,'i');
 tail=addatend(tail,'o');
 tail=addatend(tail,'u');
 print(tail);
 }
 
 
