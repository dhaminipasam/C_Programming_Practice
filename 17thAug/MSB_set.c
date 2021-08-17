#include<stdio.h>
#define BITS sizeof(int)*8

void MSB_SET(int n)
{
	int msb;
	msb=1<<(BITS-1);

	if(n & msb)
        printf("MSB of %d is set (1).", n);
    else
        printf("MSB of %d is unset (0).", n);
}

#include <stdio.h>

int main()
{
    int num;

    
    printf("Enter any number: ");
    scanf("%d", &num);

	MSB_SET(num);
   
    
    return 0;
}