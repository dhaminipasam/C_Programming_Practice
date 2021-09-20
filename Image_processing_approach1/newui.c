#include<stdio.h>
#include<stdlib.h>
#include"imgheader.h"

static char filename[100];

void prjtlogic(int choice)
{
	printf("enter file name\n");
	scanf("%s",filename);

	switch(choice)
	{
		case 1:
			showimage(filename);
			break;
		case 2:
			saveimage(filename);
			break;
	}

	printf("----------------\n");

}

void displaymenu()
{

	int choice;

while(1)
{
	printf("enter 1 to show image\n");
	
	printf("enter 2 to save image\n");

	printf("enter 3 to exit\n");


	printf("enter choice\n");

	scanf("%d",&choice);


	if(choice==3)
		exit(0);

	prjtlogic(choice);



}

}
int main()
{
	displaymenu();
	return 0;
}

