#include <stdio.h>
int main()
{
    FILE * file;
    char ch;
    int characters, words, lines;
    file = fopen("firstfile.txt", "r"); /* Open source files in 'r' mode */
    if (file == NULL)  /* Check if file opened successfully */
    {
        printf("failed in opening file");
        return 0;
    }
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {   
        if (ch == '\n' )
            lines++;
                    if(ch==' '||ch=='\n')
                    { 
                        words++; 
                    }
                    else
                    {
                        characters++; 
                    }
    
    }
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
    fclose(file);
    return 0;
}