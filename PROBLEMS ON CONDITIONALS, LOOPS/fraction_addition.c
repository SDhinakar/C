#include<stdio.h>
int main()
{
    int n,sum_d=0;
    scanf("%d",&n);
    float sum=0.0;
    for(int i=1;i<=n;i++)
    {
        sum_d=sum_d+i;
        if(i<n)
        {
            printf("1/%d + ",i);
            sum+=1.0/i;
        }
        if(i==n)
        {
            printf("1/%d",i);
            sum+=1.0/i;
        }
    }
    printf(" = %.2f",sum);
    printf("\nTotal sum : %d",sum_d);
}