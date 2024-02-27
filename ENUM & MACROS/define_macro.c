#include<stdio.h>

#define MAX(a,b) if(a>b) \
    printf("%d is greater",a); \
else \
    printf("%d is greater",b); \

    // This is a macro definition
        
int main()
{
    MAX(3,4);

    #undef MAX // This will remove the definition of MAX

   

    return 0;
}