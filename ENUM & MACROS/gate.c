#include<stdio.h>

typedef enum
{
    male=0,female=1,other=2
}gender;

int main()
{
    gender var=other;
    printf("%d\n",var);

    gender abc;
    printf("%d\n",abc); //prints base address of enum

    printf("%d\n",var==other); //prints 1

    printf("%d\n",var!=other); //prints 0


    return 0;
} 
