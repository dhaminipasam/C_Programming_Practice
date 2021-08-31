
#include<stdio.h>
#include<stdlib.h>


typedef struct node{
int data;
struct node * next;
}node;

 node *delete_alternate(node * head)
{
	node *p,*q;
	p=head;
	q=head->next;
	
	
	while(p !=NULL && q!=NULL){
		    
			
	
			p->next=q->next;
			free(q);
			p=p->next;
			if (q!= NULL)
            q = p->next;
			
	}
	return head;
}
node * create(unsigned int n)
{
	node * head=NULL;
	node * temp=NULL;
	node * p=NULL;
	int i=0;
	
	for(i=0;i<n;i++)
	{
	//for creating individual node
	temp=(node *)malloc(sizeof (node));
	printf("Enter data:\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	
	if(head==NULL)
	{
		head=temp;
		
	}
	else
	{
		p=head;
		while(p->next !=NULL)
			p=p->next;
			p->next=temp;
		
		
	}
	}
	return head;
}

void display(node *head)
{
	node *p=NULL;
		p=head;
		printf("Elements in array are:\n"); 
		while(p != NULL){
			printf("\t%d",p->data);
				p=p->next;
		}
}
	



int main()
{

node *HEAD=NULL;
HEAD=create(5);
display(HEAD);
delete_alternate(HEAD);
display(HEAD);

return 0;
}
