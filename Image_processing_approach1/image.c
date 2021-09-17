#include<stdio.h>

void showimage(const char *name)
{
	printf("%s :routine invoked\n",__func__);
	printf("%s : showing gif image\n",__func__);


}

void saveimage(const char *name)
{
	printf("%s : routine invoked\n",__func__);
	printf("%s : saving gif image\n",__func__);
	

}
