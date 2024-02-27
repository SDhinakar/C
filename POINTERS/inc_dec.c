#include<stdio.h>
int main()
{
    int a[]={11,-1,25,19,29,55,77,99};
    int *p,*q;
    p=&a[0];
    q=&a[0]+3;
    printf("%d\n",*p++);
    printf("%d\n",*p--);
    printf("%d\n",*p);
    printf("%d\n",(*(p+2))--);
    printf("%d\n",*p);
    printf("%d\n",*(p+2)-2);
    printf("%d\n",*p);
    printf("%d\n",*(p++-2));

    
}