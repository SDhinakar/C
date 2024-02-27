#include<stdio.h>
char sum(void);
void main()
{
    char s;
    s=sum();
    printf("sum=%c",s);
}
char sum()
{
    int a=10,b=20,sum=0;
    sum=a+b;
    return 'A','0','1';

    return sum,a,b,sum;//it will return the rightmost value
}