#include<stdio.h>
#define YES
#define NO
 
int main(void)
{
    /* let's test if YES and NO are defined or not */
 
    /* conditional compilation */
    #ifdef    YES
              #ifdef  NO
                  puts("Both YES and NO defined!");
              #else
                  puts("YES defined!");
              #endif /* NO */
    #elif     NO
                  puts("NO defined!");
    #else
              #error None of YES and NO defined!
    #endif /* YES */
 
    return 0;
}

/*================================================using of #error===================================*/
#include<stdio.h>  
#ifndef __MATH_H  
#error First include then compile  
#else  
void main(){  
    float a;  
    a=sqrt(7);  
    printf("%f",a);  
}  
#endif  

The #error preprocessor directive indicates error. 
The compiler gives fatal error if #error directive is found and skips further compilation process.
But, if you include math.h, it does not gives error.



#pragma and #line are compiler specific