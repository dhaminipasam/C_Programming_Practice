#include <stdio.h>  
int main()  
{  
    char first_string[20]; 
    char second_string[20]; 
    int i;  
    printf("Enter the first string:");  
    scanf("%s",first_string);  
    printf("\nEnter the second string"");  
    scanf("%s",second_string);  
	
    for(i=0;first_string[i]!='\0';i++);   
      
      
    for(int j=0;second_string[j]!='\0';j++)  
	  {  
        
        first_string[i]=second_string[j];  
        i++;  
    }  
    first_string[i]='\0';  
   printf("After concatenation, the string would look like: %s and length of new string is %d", first_string,i);  
return 0; 
} 