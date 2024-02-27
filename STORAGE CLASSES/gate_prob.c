#include<stdio.h>
int a,b,c =0;
void printfun(void);
int main()
{
    auto int a=1;
    printfun();
    a+=1;
    printfun();
    printf("\n%d %d",a,b);

}

void printfun()
{
    register int  a=2;
    int b=1;
    a += ++b;
    printf("\n%d %d ",a,b);
}