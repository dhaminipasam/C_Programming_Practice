//function returns whether this can handle the file or not.this is a psuedo code check that verifys file extension to determine its type, replace this code in production app with for signature check in the file header//
#include<stdio.h>
#include<string.h>
#include"handlers.h"


int tif_canhandle(char *filename)
{
        int len;

        char *end;

        printf("%s: checking (format compatibility ....) whether the file can handled or not \n",__func__);

        len = strlen(filename);

        end = filename + (len -3);

        printf("end = %s\n",end);
       
        if(strcmp(end,"tif") == 0)
                
                return TRUE;
        else
                return FALSE;

}       

int tif_showimage(char *filename)
{       
        printf("%s: how is this image %s \n",__func__,filename);

        return TRUE;
    

}   

int tif_saveimage(char *newfilename)
{
        printf("%s :file saved by tif handler \n",__func__);

        return TRUE;
}

imagehandler tifhandler = {
        tif_canhandle,
        tif_showimage,
        tif_saveimage
};
