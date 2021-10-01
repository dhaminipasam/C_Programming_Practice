#include<stdio.h>
#include<stdlib.h>
void print_arr(int size,int *arr)
{
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
}

void swap(int *pos1, int *pos2)
{
    int temp=*pos1;
    *pos1=*pos2;
    *pos2=temp;
}
void bubblesort(int *a,int length)
{
int i,j;
for(i=0;i<length-1;i++)
for(j=0;j<length-i-1;j++)
if(a[j]>a[j+1])
swap(&a[j],&a[j+1]);
}




int main()
{
    int arr[]={10,60,40,50,30,20};
	
	
    int length=(sizeof(arr)/sizeof(int));
	
    
    
    printf("\nBefore sorting elements are:\n");
    print_arr(length,arr);
	
    
   bubblesort(arr,length);

    printf("\nAfter bubble sort elements are:\n");
    print_arr(length,arr);
    
    return 0;
}