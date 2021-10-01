#include<stdio.h>
void display(int n)
{
if(num)
display(n-1);
else 
return;
printf("%d\n",n);
}

int main()
{
int n;
printf("Enter no.of elements :");
scanf("%d",&n);
printf("Natural numbers below %d are:");
display(n);
}
