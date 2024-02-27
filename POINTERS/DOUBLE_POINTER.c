#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    *p=10;
    **q=20;
    ***r=30;
    //last assigned value will be printed for all the pointers as they are pointing to the same memory location of a pointer structure
    printf("a=%d\n",a);
    printf("p=%d\n",*p);
    printf("q=%d\n",**q);
    printf("r=%d\n",***r);
    printf("%d %d %d %d",r,q,&p,&q);
}