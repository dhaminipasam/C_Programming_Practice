1) What will be the output of the C program?
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}
/*=====================================================*/
output:preprocessor works
/*======================================================*/
2) What will be the output of the C program?
#include<stdio.h>
# define loop while(true)
int main()
{
	loop;  
	printf("preprocessor-aptitude");
	return 0;
}
/*==================================================================*/
output :error true is not defined
Reason:in place of loop while(true) is replaced and true is not defined in the program
/*===================================================================*/


3) What will be the output of the C program?
#include<stdio.h>
# define x --5
int main()
{
	printf("%d",x);
	return 0;
}
/*=============================================================*/
output:main.c:5:14: error: lvalue required as decrement operand
  printf("%d",--5);
 
 Reason:increment and decrement operations can be performed on lvalues only
 
/*==================================================================*/  
4) What will be the output of the C program ?
#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;     
	a -= 3;
	printf("%d %d", sqr(a), z);
	return 0;
}
/*================================================================================*/
output 16 25
Reason:Undefined behavior
/*============================================================================*/
5) What will be the output of the C program?
#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;
	printf("%d",i);
}
/*========================================================================*/
output:7
Reason: are replaced first after that evaluation 1+2*1+2*1+2
/*=============================================================*/


6)#include<stdio.h>
#define a =
int main()
{
	int num a 6;
	printf("%d",num);
	return 0;
}
/*================================================================================*/
output:6
reason:Replacing macro value
/*==================================================================================*/


7) What will be the output of the C program?
#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));
	return 0;
}
/*========================================================================*/
output:3
Reason:replacing macro then evaluating=>x+2*y-1
/*=============================================================*/

8) What will be the output of the C program?
#include<stdio.h>
int main()
{
	
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );
	return 0;
}
/*===============================================================================*/
output:Aug 10 2021 
Reason:__DATE__ is a predefined macro for printing date
/*======================================================================================*/

9) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);
	return 0;
}
/*===============================================================================*/
output:Aug 10 2021 
Reason:__TIME__ is a predefined macro for printing time 
/*======================================================================================*/

10) What will be the output of the C program?
#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );
	return 0;
}
/*===============================================================================*/
output:4 //prints whichever line it is in
Reason:__LINE__ is a predefined macro for printing line number
/*======================================================================================*/


11) What will be the output of the C program?
#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}
/*===============================================================================*/
output:you and me are great!
Reason:
/*======================================================================================*/
12) What will be the output of the C program?
#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}
/*===============================================================================*/
output:%s C preprocessor C preprocessor
Reason:printf("%s C preprocessor","%s C preprocessor")=>replaces %s with string and then prints C preprocessor
/*======================================================================================*/
13) What will be the output of the C program?
#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}

/*===============================================================================*/
output:macro25 = 47
Reason:token-pasting operator (##), which is sometimes called the merging or combining operator, 
is used in both object-like and function-like macros. It permits separate tokens to be joined into a single token
/*======================================================================================*/
14) What will be the output of the C program?
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
	printf("%d",i);
	return 0;
}

/*===============================================================================*/
output:20//we get warning as i is defined 2 times

Reason:it will print local values
/*======================================================================================*/
15) What will be the output of the C program?
#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}
/*===============================================================================*/
output:reprocessor  13
Reason:ptr consists of address ptr+1 points to next elements address so reprocessor,as length is 12 after increment result is 13
/*======================================================================================*/
16) What will be the output of the C program?
#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}

/*===============================================================================*/
output:50
/*======================================================================================*/

17) What will be the output of the C program?
#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));
}

/*===============================================================================*/
output:sizeof (i) =1

Reason:int will be replaced by char so size of char is 1byte
/*======================================================================================*/


===================================== TYPEDEF =========================================

1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2;

ANS:Integer pointer

2)  In the following code what is 'P'?
typedef char *charp;
const charp P;
ANS:p is a pointer which holds the address of constant character which cannot be changed in future

3) What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
}
ANS:pointer to an array

4) What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int); 
ANS:Function pointer

5) What is pf in the below statement?
typedef int (*pf)(int);
ANS:Function pointer

6) What do the following declarations mean?
typedef char *pc;=>
typedef pc fpc();
typedef fpc *pfpc;
typedef pfpc fpfpc();
typedef fpfpc *pfpfpc;
pfpfpc a[N];


Explanation:typedef char *fpc();
Next,

typedef fpc   *pfpc;
declares pfpc as a pointer to fpc. Since we know that fpc is a function returning a pointer to char, then pfpc must be a pointer to a function returning pointer to char, or

typedef char *(*pfpc)()  
Next we have

typedef pfpc   fpfpc();
This time, fpfpc is a function returning pfpc. Since we know that pfpc is a pointer to a function returning pointer to char, fpfpc must be a function returning a pointer to a function returning pointer to char, or

typedef char *(*fpfpc())();
Next, we have

typedef fpfpc *pfpfpc;
which declares pfpfpc as a pointer to fpfpc. Since we know fpfpc is a function returning a pointer to a function returning pointer to char, pfpfpc must be a pointer to a function returning a pointer to a function returning a pointer to char, or

typedef char *(*(*pfpfpc)())();
Finally, we have an an N-element array of pfpfpc

pfpfpc a[N];
Since we know pfpfpc is a pointer to a function returning pointers to functions returning pointers to char, then a must be an N-element array of pointers to functions returning pointers to functions returning pointers to char:

char *(*(*a[N])())();
The main rule to remember for reading and writing hairy declarations is that [] and () have higher precedence than *, so

*a[]       -- is an array of pointer
(*a)[]     -- is a pointer to an array
*f()       -- is a function returning a pointer
(*f)()     -- is a pointer to a function

