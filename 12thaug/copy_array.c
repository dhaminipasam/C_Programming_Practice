#include <stdio.h>
#include<conio.h>
#define MAX_SIZE 100 // Maximum array size


/* Function declaration to print array */
void printArray(int arr[], int size);
void copy_array(int *source_ptr,int *dest_ptr,int size);


int main()
{
     int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
     int size, i;

     int *source_ptr = source_arr;   // Pointer to source_arr
     int *dest_ptr   = dest_arr;     // Pointer to dest_arr

     int *end_ptr;


     /*
      * Input size and elements in source array
      */
     printf("Enter size of array: ");
     scanf("%d", &size);
     printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
     {
        scanf("%d", (source_ptr + i));
     }


   

    /* Print source and destination array before copying */
     printf("\nSource array before copying: ");
    printArray(source_arr, size);

    printf("\nDestination array before copying: ");
     printArray(dest_arr, size);
     
	copy_array(source_arr,dest_arr,size);
	
	 /* Print source and destination array after copying */
     printf("\n\nSource array after copying: ");
    printArray(source_arr, size);

     printf("\nDestination array after copying: ");
    printArray(dest_arr, size);
  

     return 0;

}
void printArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
     {
        printf("%d, ", *(arr + i));
    }
}

 void copy_array(int *source_ptr,int *dest_ptr,int size)
 {
   
   while(source_ptr < (source_ptr+size))
    {
          *dest_ptr = *source_ptr;

        // Increment source_ptr and dest_ptr
          source_ptr++;
        dest_ptr++;
    }


   
 }