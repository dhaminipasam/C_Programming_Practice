/******************************************************************************

Merge Sort
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
void print_arr(int size,int arr[])
{
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
}


int partition(int *a,int lb,int ub);
void Quicksort(int *a,int lb,int ub);
void swap(int *pos1, int *pos2)
{
    int temp=*pos1;
    *pos1=*pos2;
    *pos2=temp;
}


int main()
{
    int arr[]={90,60,40,50,30,20};
	int lb,ub;
	
    int length=(sizeof(arr)/sizeof(int));
	lb=0;
	ub=length-1;
    
    
    printf("\nBefore sorting elements are:\n");
    print_arr(length,arr);
	
    
   Quicksort(arr,lb,ub);

    printf("\nAfter Quick sort elements are:\n");
    print_arr(length,arr);
    
    return 0;
}
int partition(int *a,int lb,int ub)
{
int pivot,start,end;
pivot=a[lb];
start=lb;
end=ub;
while(start < end)
{
	while(a[start]< pivot)
	start++;
	while(a[end]>pivot)
	end--;
	if(start<end)
	swap(&a[start],&a[end]);
	}
	swap(&a[end],&pivot);
	return end;
}
	


void Quicksort(int *a,int lb,int ub)
{
	int loc;
    if (lb<ub)
	{
		loc= partition(a,lb,ub);
		Quicksort(a,lb,loc-1);
		Quicksort(a,loc+1,ub);
	}
	

}



