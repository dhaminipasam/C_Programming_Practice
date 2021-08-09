#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=1,j=0,k=0;
    while(i<=5)
	{
		while(j<i)
		{
		    printf("/");
		
			    while( k<2*j)
			    {
			    printf(" ");
			    k++;
			    }
		    k=0;
		    printf("\\");
			j++;
		}
		printf("\n");
		
		i++;
	}
		
	}