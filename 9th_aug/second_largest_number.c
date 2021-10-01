#include<stdio.h>
int main()
{
	int a[]={1,2,5,4,3},temp,i,j;
	for (i = 0; i < 5; ++i) 
    {
    for (j = i + 1; j < 5; ++j)
    {
		if(a[i] > a[j])
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
    }
		
	printf("second largest number is:%d\n",a[i-2]);
}
	
