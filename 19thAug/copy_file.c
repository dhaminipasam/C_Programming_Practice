#include<stdio.h>

int main()
{
	FILE *p,*p2; 
	char ch;
	p=fopen("firstfile.txt","r");   
	                                 
	if(p==NULL)
	{
		printf("failed in opening file\n");
		return 0;
	}
	p2=fopen("firstfile2.txt","w"); 
	if(p==NULL)
	{
		printf("failed in opening file\n");
		return 0;
	}
	while(  (ch=fgetc(p)) != EOF)    
	{
	fputc(ch,p2);
	printf("%c\n",ch);	
	}
	
	fclose(p); 
	fclose(p2);
	return 0;
}