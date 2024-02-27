#include<stdio.h>
int main()
{
    register int x=10;
    {
        register int v; //lifetime of register variables is within the block
        printf("%d",v);//scope of v is within the block
    }
    printf("\n%d",x);//no default value for register variables
    return 0;
}