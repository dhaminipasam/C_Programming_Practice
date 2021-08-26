/* wap to declare an array of struct with a char data type and initialize the character with "h" ,"e" ,"l","l","o" and sort the array in alphabetical order - use malloc / calloc for struct variable */
#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char c;
}struct_char;

void sort(struct_char *ch){
	int i,j;
	char temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
	
			if((ch+i)->c<(ch+j)->c)
			{
			temp=(ch+i)->c;
			(ch+i)->c=(ch+j)->c;
			(ch+j)->c=temp;
			}
		}	
	}
}

int main(){
	
	struct_char *str=(struct_char *)malloc(sizeof(struct_char)*5);
	int i;

	printf("enter the string:");
	for(i=0;i<5;i++)
		scanf("%c",&(str+i)->c);
	
	/*Print the string before sorting*/
	for(i=0;i<5;i++)
	printf("%c\t",(str+i)->c);
	printf("\n");
	
	
	sort(str);
	
	/* print the string after sorting*/
	
	for(i=0;i<5;i++)
	printf("%c\t",(str+i)->c);

	return 0;
}

