#include<stdio.h>  
#include"swap.h"
  
int main()  
{  
    int a, b;  
  
    printf("Enter values for a and b\n");  
    scanf("%d%d", &a, &b);  
  
    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
    swap(&a, &b);  
  
    printf("\nAfter swapping: a = %d and b = %d\n", a, b);  
  
    return 0;  
}  
  
