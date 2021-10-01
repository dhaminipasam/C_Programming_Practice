#include<stdio.h>

int copy_string(char*, char*);

main()
{
	int length;
    char source[100], target[100];    
    printf("Enter source string\n");    
    gets(source);    
    length=copy_string(target, source);    
    printf("Target string is \"%s and length of the string is :%d \"\n", target,length);    
    return 0;
}

int copy_string(char *target, char *source)
{
	int count;
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
		count++;
    }    
	*target = '\0';
	return count;
}