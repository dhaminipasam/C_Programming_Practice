
#define TRUE 1
#define FALSE 0

int playaudio(char *filename);
int playvideo(char *filename);

typedef struct {

        int (*canhandle)(char *);
        int (*playaudio)(char *);
        int (*playvideo)(char *);

}imagehandler;

