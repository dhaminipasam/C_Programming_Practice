#include<stdio.h>
int main()
{
    char ch;
	double a,b;

	printf("Enter the value of a:");
	scanf("%lf",&a);
	printf("Enter the value of b:");
	scanf("%lf",&b);
	
	printf("Enter your choice:");
	scanf("%c",&ch);

	printf("a.Addition \n");
	printf("s.Subtraction \n");
	

	

	switch(ch)
	{
		case 'a':
			printf("Addition of two no is:%lf", a+b);
			break;
		case 'b':
			printf("Subtraction of two no is:%lf",a-b);
			break;
		default:
			printf("default no action\n");

	}
	return 0;
}