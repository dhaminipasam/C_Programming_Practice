#include<stdio.h>

int main()
{
FILE *fptr;
char dataToBeWritten[50] = "from opened file";
char str[]="knowing fprint";
char str1[]="knowing fwr";

fptr=fopen("abc.c","a");

if(*fptr==NULL)
printf("failed to open file\n");
 else
    {
         
        printf("The file is now opened.\n") ;
         
       
        if ( strlen ( dataToBeWritten ) > 0 )
        {
            fputs(dataToBeWritten, fptr) ;
            fputs("\n", fptr) ;
			fprintf(fp, "%s",str);
			fputs("\n", fptr) ;
			fwrite(str1 , 1 , sizeof(str1) , fp );
			

			
        }
 
        fclose(filePointer) ;
	}
	
	return 0;
}


/*
     * Logic to count characters, words and lines.
     */
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        /* Check new line */
        if (ch == '\n' || ch == '\0')
            lines++;

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    /* Increment words and lines for last word */
    if (characters > 0)
    {
        words++;
        lines++;
    }
		