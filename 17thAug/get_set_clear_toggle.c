#include <stdio.h>
  
// Function to set the kth bit of n
int setBit(int n, int k)
{
    return (n | (1 << (k - 1)));
}
  
// Function to clear the kth bit of n
int clearBit(int n, int k)
{
    return (n & (~(1 << (k - 1))));
}
  
// Function to toggle the kth bit of n
int toggleBit(int n, int k)
{
    return (n ^ (1 << (k - 1)));
}

// Function to get the kth bit of n

int getBit(int n,int k)
{
	return ((n>>(k-1)) & 1);
}
  

int main()
{
    int num,k;
	printf("Enter Number");
	scanf("%d",&num);
	printf("Enter position of bit");
	scanf("%d",&k);
  
    printf("%d with %d-th bit Set: %d\n",
           num, k, setBit(n, k));
    printf("%d with %d-th bit Cleared: %d\n",
           num, k, clearBit(n, k));
    printf("%d with %d-th bit Toggled: %d\n",
           num, k, toggleBit(n, k));
		   
	printf("%d with %d-th bit Toggled: %d\n",
           num, k, getBit(n, k));
    return 0;
}