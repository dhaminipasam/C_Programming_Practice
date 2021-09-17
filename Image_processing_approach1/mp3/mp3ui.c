#include<stdio.h>
#include<stdlib.h>
#include"mp3header.h"

static char filename[100];

void handlemenu(int choice)
{
        printf("enter file name\n");
        scanf("%s",filename);

        switch(choice)
        {
                case 1:
                        playaudio(filename);
                        break;
                case 2:
                        playvideo(filename);
                        break;
        }


        printf("-------------------------------------------------\n");

}

void displaymenu()
{

        int choice;

	while(1)
	{

        printf("enter 1 to play audio\n");

        printf("enter 2 to play video\n");

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
