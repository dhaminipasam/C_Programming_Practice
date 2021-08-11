#include <stdio.h>
void insert(int *arr,int data,int pos,int length)
{
	int n,i;
	n=length+1;////for storing new element increase the size by 1
	
 // shift elements forward
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];
	
	// insert data at pos
    arr[pos - 1] = data;
	
	
	
	// print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = { 1,2,3,4,5 };
    int i, x, pos, n = 10,length;
	x=50;
	pos=4;
	
 
    
	length=sizeof(arr)/sizeof(int);
 
    // print the original array
    for (i = 0; i < length; i++)
        printf("%d ", arr[i]);
        printf("\n");
        
	insert(arr,x,pos,length);
 
    return 0;
}