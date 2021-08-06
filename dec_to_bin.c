#include<stdio.h>

void dectobin(int num)
{

int res[20],i=0;
while(num !=0){
res[i]=num%2;
i++;
num=num/2;
}
printf("\nBinary of Given Number is=");  
for(i=i-1;i>=0;i--)    
   printf("%d",res[i]);    
}  
} 


int main()
{
	int num;
	
	printf("Enter Decimal number:");
	scanf("%d",&num);
	dectobin(num);
	return 0;
}
	
	
	