#include <stdio.h>
int main()
{
    int a=10,b=9;
    int *p,*q;
    p=&a;
    q=&b;
    int c=*q;
    printf("c=%d\n",*q);
    *p=20;
    printf("a=%d\n",a);
    printf("b=%x\n",p);
}