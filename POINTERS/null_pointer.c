#include <stdio.h>

int main() 
{
    int a=3;
    int *ptr1=NULL;
    int *ptr2=0;
    if(ptr1==ptr2)
    {
        printf("Both pointers are equal\n");
    }
    else
    {
        printf("Both pointers are not equal\n");
        printf("ptr1: %p\n", ptr1);
        printf("ptr2: %p\n", ptr2);
    }
}
