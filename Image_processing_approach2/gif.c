/*function returns whether this can handle the file or not.this is a psuedo code check that 
verifys file extension to determine its type, replace this code in production app with for 
signature check in the file header*/

#include<stdio.h>
#include<string.h>
#include"handlers.h"

int gif_canhandle(char *filename)

{
        int len;

        char *end;

        printf("%s checking (format compatibility ....) wheather the file can be handled or not \n",__func__);

        len = strlen(filename);

        end = filename + (len -3);

        printf("end = %s\n",end);

        if(strcmp(end,"gif") == 0)

                return TRUE;
        else
                return FALSE;

}

int gif_showimage(char *filename)
{
         printf("%s: how is this image %s \n",__func__,filename);

        return TRUE;
}

int gif_saveimage(char *newfilename)
{
        printf("%s :file saved by gif handler \n",__func__);

        return TRUE;
}

imagehandler gifhandler ={
        gif_canhandle,
        gif_showimage,
        gif_saveimage
};


