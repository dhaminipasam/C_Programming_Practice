
#include<stdio.h>
#include<string.h>
#include"mp3header.h"

extern imagehandler mp3handler;
//extern imagehandler gifhandler;
//extern imagehandler tifhandler;

imagehandler *imagehandlers[]={
        &mp3handler,//exported by mp3header//
        NULL
};

int find_handler(char *filename)
{
	imagehandler *ih;
	int handleno =0;
	ih = imagehandlers[0];

//code to traverse through all of the objects: implemented with function pointer derefer operation for polymorphic behaviour//


	while(ih !=NULL)
	{
		printf("%s: handle no =%d ptr = %p\n",__func__,handleno,ih);
		if(ih ->canhandle(filename))
			return handleno;
		handleno++;
		ih = imagehandlers[handleno];
	}
	return -1;
}

int playaudio(char *filename)
{
	imagehandler *ih;
	int handleno = 0;

	handleno = find_handler(filename);

	printf("%s: handle no = %d\n",__func__,handleno);

	if(handleno == -1)
	{
		printf("we cannot handle this file \n");
		return FALSE;
	}

	ih = imagehandlers[handleno];
        ih->playaudio(filename);//appropriate handler function call through function pointer//
        return  TRUE;

}

int playvideo(char *newfilename)
{
        imagehandler *ih;
        int handleno = 0;

        handleno = find_handler(newfilename);

        if(handleno == -1)
        {
                printf("we cannot handle this file \n");
                return FALSE;
        }

        ih = imagehandlers[handleno];
        ih->playvideo(newfilename);//appropriate handler function call through function pointer//
        return  TRUE;


}

