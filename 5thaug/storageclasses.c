/*Program to explain all storage classes scope.*/


/*====AUTO======*/
//Example 1:
#include <stdio.h>  
int main()  
{  
int a; //auto  
char b;  
float c;   
printf("%d %c %f",a,b,c); // printing initial default value of automatic variables a, b, and c.i.e garbage   
return 0;  
}  
//Example 2:
int main()
int a = 10,i;   
printf("%d ",++a);  
{  
int a = 20;   
for (i=0;i<3;i++)  
{  
printf("%d ",a); // 20 will be printed 3 times since it is the local value of a  
}  
}  
printf("%d ",a); // 11 will be printed since the scope of a = 20 is ended.   
}  
/*======static===============*/
#include<stdio.h>  
static char c;  
static int i;  
static float f;   
static char s[100];  
void main ()  
{  
printf("%d %d %f %s",c,i,f); // the initial default value of c, i, and f will be printed.  i.e 0 
}  
/*example 2*/
#include<stdio.h>  
void sum()  
{  
static int a = 10;  
static int b = 24;   
printf("%d %d \n",a,b);  
a++;   
b++;  
}  
void main()  
{  
int i;  
for(i = 0; i< 3; i++)  
{  
sum(); // The static variables holds their value between multiple function calls.    
}  
}  

/*======== Register========================*/



#include <stdio.h>  
int main()  
{  
register int a = 0;   
printf("%u",&a); // This will give a compile time error since we can not access the address of a register variable.   
}  

/*=======================extern=============*/

#include <stdio.h> 
extern int a;  //throws error as it is declared and not defined anywhere
int main()  
{  
 a=20 
printf("%d",a);  
}  



#include <stdio.h>   
extern int a=5;
int main()  
{  
 a=20 ;   
printf("%d",a);  //.if a variable is only declared and an initializer is also provided with that declaration, then the memory for that variable will be allocated–in other words, that variable will be considered as defined
}  


