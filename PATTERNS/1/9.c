#include<stdio.h>
int main()
{
    int n,i,j,nums=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,nums++)
        {
            printf("%d",nums);
            if(j<i)
            {
                printf("*");
            }
        }
        printf("\n");
    }

}