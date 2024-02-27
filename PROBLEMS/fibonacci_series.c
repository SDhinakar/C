#include<stdio.h>
int main()
{
    int a=0,b=1,temp;
    int n=10;
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",a);
        temp=a+b;
        a=b;
        b=temp;
    }
}