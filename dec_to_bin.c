#include<stdio.>

int dec_to_bin(int num)
{
	int i=0;
	
	if(num==0)
	return 0;
	else 
	return (num%2  + 10*dec_to_bin(num/2)));
}

	

int main()
{
	int num,res;
	printf("Enter num");
	scanf("%d",&num);
	res=dec_to_bin(num);
	printf("%d\n",res);
	return 0;
}
	
	