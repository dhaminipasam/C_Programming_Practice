#include<stdio.h>
#include<string.h>
#include"mp3header.h"

int mp3_canhandle(char *filename)

{
        int len;

        char *end;

        printf("%s checking (format compatibility ....) wheather the file can be handled or not \n",__func__);

        len = strlen(filename);

        end = filename + (len -4);

        printf("end = %s\n",end);

        if(strcmp(end,".mp3") == 0)

                return TRUE;
        else
                return FALSE;

}

int mp3_playaudio(char *filename)
{
         printf("%s: playing audio %s \n",__func__,filename);

        return TRUE;
}

int mp3_playvideo(char *newfilename)
{
        printf("%s :playing video  \n",__func__);

        return TRUE;
}

imagehandler mp3handler ={
        mp3_canhandle,
        mp3_playaudio,
        mp3_playvideo
};


