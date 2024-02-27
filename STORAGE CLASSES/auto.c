#include<stdio.h>
int main()
{
    auto int x=10;
    {
        auto int b;     //lifetime of auto variables is within the block
        printf("%d",b);//scope of b is within the block
    }
    printf("\n%d",x);//no default value for auto variables
    return 0;
}