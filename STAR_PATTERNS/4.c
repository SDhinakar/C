#include<stdio.h>
int main()
{
    int i,j;
    char alps='a';
    for(i=1;i<=5;i++) 
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",alps++);
        }
        printf("\n");
    }
    char small='a';
    for(i=5;i>=1;i--) 
    {
        for(j=i;j>=1;j--)
        {
            printf("%c",small++);
        }
        printf("\n");
    }
   
}