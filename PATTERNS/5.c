#include<stdio.h>
int main()
{
    int caps=1;
    int i,j,rows;
    scanf("%d",&rows);
    
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i;j++)
        {
            printf("%5d",caps++);
        }
        printf("\n");
    }
}
