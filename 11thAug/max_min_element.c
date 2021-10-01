#include<stdio.h>
 
int main()
{
    int a[1000],i,n,min,max;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])      //2,3,1,5,4
		  min=a[i]; 
		  
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
 
 
    return 0;
}