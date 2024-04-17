#include<stdio.h>
#include<math.h>
int main()
{
    int n,first,last,len,power;
    scanf("%d" , &n);
    last=n%10;
    n/=10;
    len=(int)log10(n);
    power=pow(10,len);
    first=n/power;
    n=n%power;
    printf("%d%d%d",last,n,first);
}