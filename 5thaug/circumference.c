#include<stdio.h>

#define pi 3.14

void circumference(int r)
{
 float c,area;
 c=2*pi*r;
 area=pi*r*r;
 
 printf("circumference of circle is:%f area of circle is :%f\n",c,area);
}

int main()
{
	int radius;
	printf("Enter radius of circle:");
	scanf("%d",&radius);
}