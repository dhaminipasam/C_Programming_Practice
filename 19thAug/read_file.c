#include<stdio.h>
int main()
{
	FILE *p; //declaration of file pointer
	char ch;
	p=fopen("firstfile.txt","r");   //file_pointer=fopen("filename","mode"); 
	                                 //r=read mode only give permission to read
	if(p==NULL)
	{
		printf("failed in opening file\n");
		return 0;
	}
	while(  (ch=fgetc(p)) != EOF)    //get a char from file syntax int fgetc(FILE *p)
	{
	
	                   printf("%c\n",ch);	
	}
	fclose(p); //closes the open file
	return 0;
}
