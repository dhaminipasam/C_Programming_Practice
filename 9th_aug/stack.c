#include<stdio.h>
#define MAX 3
int stack_arr[MAX];
int tos=-1;


int is_empty()
{
	if(tos==-1)
	return 1;
	else 
	return 0;
}
int is_full()
{
	if(tos == MAX-1)
		return 1;
	else return 0;
}



void push(int data)
{
	if(is_full())
	
	printf("stack is full\n");
	
	else
	{
	tos++;
	stack_arr[tos]=data;
	}
	
}
int pop()
{
    int data;
	if(is_empty())
	
		printf("stack is empty\n");
	
	else
	{  
		data=stack_arr[tos];
		tos--;
	}
	return data;
}
void display()
{
	int i;
	if(tos==-1){
	printf("stack underflow:\n");
	return;
	}
	printf("Elements in the stack are:\n");
	for (i=tos;i>=0;i--)
		printf("%d\n",stack_arr[i]);
	
}
int main()
{
	int data;
	push(1);
	push(2);
	push(3);
	display();
	data=pop();
	printf("popped element is:%d\n",data);
	display();
}
	
	