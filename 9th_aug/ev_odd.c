#include<stdio.h>

int main()
{
	int i;
	printf("Even numbers are:");
	for(i=1;i<=100;i++)
	{
	
	if(i%2 ==0)

		printf("%d,",i);
	}
	
	printf("\nodd numbers are:");
	for(i=1;i<=100;i++)
	{
	
	if(i%2 !=0)

		printf("%d,",i);
	}
	
return 0;
}

/*=================checking the same code using Ternary operator========================*/

#include < stdio.h >  
  
int main()  
{  
    int n;  
  
    printf("Enter an integer number\n");  
    scanf("%d", &n);  
  
    (n % 2 == 0) ?  
    (printf("%d is Even number\n", n)) :  
    (printf("%d is Odd  number\n", n));  
  
    return 0;  
}  