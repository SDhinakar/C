#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int *p=a;
    int *q=&a[3];
    printf("%d\n",q-p);
    printf("%d\n",p-q);
    printf("%d\n",*p);
    q=q-2;
    printf("%d\n",*q);
    p=p+2;
    printf("%d\n",q-p);
}