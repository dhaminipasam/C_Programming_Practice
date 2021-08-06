#include<stdio.h>
#include<stdlib.h>

void  mymemmove(void *dest, const void *source,unsigned int n)
{
	char *pdest= (char *)dest;
	const char *psource = (const char *)source;
	
	//allocate memory for temporaray array
	char *tmp = (char *) malloc(sizeof(char) * n);
	if (tmp==NULL)
		exit;
	else
	{
		unsigned int i=0;
		for (i=0;i<n;i++)
			*(tmp+i)=*(psource+i);
		for (i=0;i<n;i++)
			*(pdest+i)=*(tmp+i);
		free(tmp);
	}
} 
		
int main()
{
char pdest[]="memcopy";
const char psrc[]="overlaps";
mymemmove(pdest,psrc,5);
printf("copied string is:%s\n",pdest);
return 0;
}
