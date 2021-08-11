#include <stdio.h>
 
 void copy(int *a,int *b,int n)
 {
 	int i;
    for(i=0; i<n; i++)
     b[i]=a[i];
 }
 
 
void  print(int a[],int n)
 { 
	int i;
    for(i=0; i<n; i++)
	  printf("%d ",a[i]);
 	
 }
int main()
{
    int a[1000],b[1000],i,n;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    copy(a,b,n);
 
    printf(" first array : ");
    print(a,n);
    
    printf("\nsecond array : "); 
	print(b,n);
 
    
}