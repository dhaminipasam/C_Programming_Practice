
//this routine implements request switching logic, it attempts to lcate suitable handler to process user request.suitable handler is located by traversing through each of the registered handler objects in the array(imagehandler[] array)until compatible.on success it returns offset positionof the handler in the array,else -1 on failure.//

#include<stdio.h>
#include<string.h>
#include"handlers.h"

extern imagehandler jpghandler;
extern imagehandler gifhandler;
extern imagehandler tifhandler;

imagehandler *imagehandlers[]={
        &tifhandler,//exported by tifheader//
        &gifhandler,
        &jpghandler,
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

int vshowimage(char *filename)
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
	ih->showimage(filename);
	return 	TRUE;
}


int vsaveimage(char *newfilename)
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
        ih->saveimage(newfilename);//appropriate handler function call through function pointer//
        return  TRUE;


}
