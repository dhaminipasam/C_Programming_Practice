#include<stdio.h>
int main()
{
	FILE *fp; 
	char ch;
	fp=fopen("firstfile.txt","w");   
	                                 
	if(fp==NULL)
	{
		printf("failed in opening file\n");
		return 0;
	}
	while(  (ch=getchar()) != EOF)    
	{
		fputc(ch,fp);
	    printf("%c\n",ch);	
	}
fclose(fp); //closes the open file
return 0;
}