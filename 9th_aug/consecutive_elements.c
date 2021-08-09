#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		printf("%d",i);
		
	}
return 0;
}
		
	