#include<stdio.h>
int main()
{
    int i,j;
    char alps='A';
    for(i=1;i<=5;i++) 
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",alps++);
        }
        alps='A';
        printf("\n");
    }
    char small='a';
    for(i=1;i<=5;i++) 
    {
        for(j=5;j>=i;j--)
        {
            printf("%c",small++);
        }
        small='a';
        printf("\n");
    }
   
}