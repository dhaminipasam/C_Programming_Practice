#include<stdio.h>
#include<stdlib.h>
void print_arr(int size,int arr[])
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
void selectionsort(int *arr, int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}



int main()
{
    int arr[]={10,60,40,50,30,20};
	
	
    int length=(sizeof(arr)/sizeof(int));
	
    
    
    printf("\nBefore sorting elements are:\n");
    print_arr(length,arr);
	
    
   selectionsort(arr,length);

    printf("\nAfter selection sort elements are:\n");
    print_arr(length,arr);
    
    return 0;
}