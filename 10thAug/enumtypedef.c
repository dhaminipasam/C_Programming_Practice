#include<stdio.h>
  
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
  
int main()
{
    enum week day;
    day = Wed;
    printf("%d",day);
    return 0;
} 


/*================================================*/

Example:2
 typedef enum
    {
        NO_OP,
        ADDITION,
    }   operator_t;

int main()
{
    operator_t operator = NO_OP;
	printf("%d\n",operator);
}


/*=====================================================explanation for example2=======================================*/
enum operator {
    NO_OP,
    ADDITION
} op1, op2, op3;

or they can be declared later, by referencing the enum's tag:

	enum operator op4, op5;
	
=>Also like a struct declaration, the tag can be omitted, in which case the enumerated type cannot be referenced 
	elsewhere in the source code (but any declared variables of that type are still fine):

enum{
    NO_OP,
    ADDITION
} op1, op2, op3;


Now we get to the typedef. A typedef is a means to declare an alternative name for a type. 


typedef unsigned long long int ull_t;
declares ull_t to be an alternative name for type unsigned long long int. The two type names can thereafter be used interchangeably (within the scope of the typedef declaration).

In your case, you have

typedef enum
{
    NO_OP,
    ADDITION,
}   operator_t;


which declares operator_t as an alias for the tagless enumerated type given. 
Declaring a typedef in this way makes the enum usable elsewhere, via the typedef name, even though the enum is tagless. 
This is a fairly common mechanism for declaring a shorthand name for an enumerated type, and an analogous technique is common for structs, too.