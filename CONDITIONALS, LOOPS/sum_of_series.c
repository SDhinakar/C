#include<stdio.h>
int main()
{
    int a,sum=0,var=6;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        sum+=var;
        printf("%d ",var);
        var=var*10+6;
    }
    printf("\nsum is : %d",sum);
}