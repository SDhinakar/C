#include<stdio.h>
int main()
{
    int i,j,space=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
    for(i=5-1;i>=1;i--)
    {
        for(j=1;j<=space-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
}