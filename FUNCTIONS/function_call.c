#include<stdio.h>
void fun(int* ,int*);
void main()
{
    int x=10, y=20;
    fun(&x,&y);
    printf("inside main(calling function)\n");
    printf("x=%d,y=%d\n",x,y);
}

void fun(int* x,int* y)
{
    *x=30;
    *y=40;
    printf("inside fun(called function)\n");
    printf("x=%d,y=%d\n",*x,*y);
}
