#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    int end=n;
    for(int i=1;i<=n;i++)
    {
        printf("%d,%d",i,end--);
        if(i<n)
        {
            printf(",");
        }
    }
}