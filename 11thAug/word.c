#include<stdio.h>
#include <string.h>
 
int main()
{
    char s[1000],w[1000];  
    int i=0,flag=0,c,index;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter word to be searched: ");
    gets(w);
	
	for(i=0;s[i]!= '\0';i++)
	{
		if (s[i] == w[0])
		{
			flag=1;
			for(c=1;w[c] != '\0';c++)
			{
				if(s[i+c]  != w[c])
				{
					flag=0;
					break;
				}
			}
			
		}
			
		if(flag == 1)
		{
			break;
		} 
	}
	if(flag == 0)
  	{
  		printf("\n Sorry!! We haven't found the Word '%s' ", w);
	}
	else
	{
		printf("\n We found '%s' at position %d ", w, i + 1);
	}	
	
  	return 0;

}