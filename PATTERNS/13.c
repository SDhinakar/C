#include<stdio.h>
int main()
{
    int n,v,sum=0;
    scanf("%d%d",&n,&v);
    int temp=v;
    for(int i=1;i<=n;i++)
    {
        sum+=v;
        printf("%d ",v);
        v=temp*10+v;
    }
    printf("Sum of the series is %d",sum);
}