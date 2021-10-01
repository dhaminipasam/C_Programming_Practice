#include<stdio.h>

union Test
{
	unsigned int i;
	unsigned char c[2];
}

int main()
{
	union Test machine={300};
	
	if((machine.c[0]==1) && machine.c[1]==44))
	printf("Big Endian\n");
	
	else
	printf("Little Endian\n");
}
	