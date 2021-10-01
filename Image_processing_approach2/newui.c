#include<stdio.h>
#include<stdlib.h>
#include"handlers.h"

static char filename[100];

void handlemenu(int choice)
{
	printf("enter file name\n");
	scanf("%s",filename);

	switch(choice)
	{
		case 1:
			vshowimage(filename);
			break;
		case 2:
			vsaveimage(filename);
			break;
	}

	
	printf("-------------------------------------------------\n");

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

	handlemenu(choice);



}

}

int main()
{
	displaymenu();
	return 0;
}
