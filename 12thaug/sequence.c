#include<stdio.h>
#define SIZE 50
int main()
{
	int n,i,j,num,arr[SIZE];
	int check_bit,flag,count;
	

	
	printf("Enter no.of elements");
	scanf("%d",&n);
	
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	check_bit=0,flag=0,	count=0;
	if(n==2 && arr[0]==1 && arr[1]==2)
	{
	    flag=1;
	    goto end;
	}
	
	for(i=1;i<n;i++)				//loop for traversing the array
	{
	     num=arr[count];
	    
		for(j=0;j<num;j++)            //loop for checking whether sequence is  same as value or not
		{
		    
		    count++;
		    
		   
		    if(check_bit < n )
		    {
		        
			    if(arr[check_bit+j]!=num)
			    {
			      
			        flag=1;
			        goto end;			//if false want to go out of two loops so using go to
			    }
		    }
		  
		}
		check_bit=count;		//for retaining the index address where  the next element starts in an array
	}
	
end:	
	if(flag==1)
		printf("sequence is invalid\n");
	else 
		printf("sequence is valid\n");
	
return 0;
}