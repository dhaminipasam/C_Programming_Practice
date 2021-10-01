
#define TRUE 1
#define FALSE 0

int vshowimage(char *);
int vsaveimage(char *);

typedef struct {

	int (*canhandle)(char *);
	int (*showimage)(char *);
	int (*saveimage)(char *);

}imagehandler;
