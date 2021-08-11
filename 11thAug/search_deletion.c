#include<stdio.h>

int findElement(int arr[], int n,
                int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    return -1;
}
 
int deleteElement(int arr[], int n,
                  int key)
{
    // Find position of element to be deleted
    int pos = findElement(arr, n, key);
 
    if (pos == - 1)
    {
        printf("Element not found");
        return n;
    }
 
    // Deleting element
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1;
}

int main()
{
    int arr[] = {12, 34, 10, 6, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Using a last element as search element
    int key = 40;
    int position = findElement(arr, n, key);
 
    if (position == - 1)
        printf("Element not found");
    else
        printf("Element Found at Position: %d", position + 1 );
	n=deleteElement(arr,n,6)
	printf("Elements after deletion are:");
	for(i=0;i<n;i++)
		printf("%d",arr[i])
 
    return 0;
}