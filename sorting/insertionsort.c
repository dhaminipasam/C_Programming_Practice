#include<stdio.h>
#include<stdlib.h>
void print_arr(int size,int arr[])
{
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
}

void insertionsort(int *a,int length)
{
int i,j,temp;
for(i=1;i<length;i++){

temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
}
int main()
{
    int arr[]={10,60,40,50,30,20};
	
	
    int length=(sizeof(arr)/sizeof(int));
	
    
    
    printf("\nBefore sorting elements are:\n");
    print_arr(length,arr);
	
    
   insertionsort(arr,length);

    printf("\nAfter Insertion sort elements are:\n");
    print_arr(length,arr);
    
    return 0;
}