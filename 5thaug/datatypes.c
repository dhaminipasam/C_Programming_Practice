#include<stdio.h>



int main()
{
    int a = 1;
    char b = 'G';
    double c = 3.14;
    
    printf("I am a character:%c of size %lu byte.\n", b, sizeof(char));
    printf("I am an integer%d of size  %lu  bytes.\n",a, sizeof(int));
    printf("I am a double floating point variable %f of size %lu bytes\n",c, sizeof(double));
	printf("size of short is :%lu bytes\n",sizeof(short));
	printf("size of double is :%lu bytes\n",sizeof(double));
	printf("size of unsigned short is :%lu bytes\n",sizeof(unsigned short));
	printf("size of unsigned int is :%lu bytes\n",sizeof(unsigned int));
	printf("size of unsigned char is :%lu bytes\n",sizeof(unsigned char));
	printf("size of unsigned long is :%lu bytes\n",sizeof(unsigned long));

	
}