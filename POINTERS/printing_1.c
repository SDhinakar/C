#include <stdio.h>
int main()
{
    float a=10,b=5;
    float *p,*q;
    p=&a;
    q=p;
    //*p=*q;
    q=&b;
    printf("%f %f %f",a,*p,*q);
}