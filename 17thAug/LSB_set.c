#include<stdio.h>

void LSB_SET(int n)
{
	if(n & 1)
        printf("LSB of %d is set (1).", n);
    else
        printf("LSB of %d is unset (0).", n);
}


int main()
{
    int num;

    
    printf("Enter any number: ");
    scanf("%d", &num);

	LSB_SET(num);
   
    
    return 0;
}