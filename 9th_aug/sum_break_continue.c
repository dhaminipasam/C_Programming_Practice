#include<stdio.h>

int main()
{
	int i,num,sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter num:");
		scanf("%d",&num);
		if(num < 0)
			continue;
		else if(num==0)
			break;	
		else
			sum += num;
	
	}
	printf("sum:%d\n",sum);
	return 0;
}