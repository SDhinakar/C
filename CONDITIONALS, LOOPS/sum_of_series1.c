#include<stdio.h>
int main()
{
    int n,rows,sum=0;
    scanf("%d %d",&n,&rows);
    int temp=n;
    for(int i=1;i<=rows;i++)
    {
        printf("%d\n",temp);
        sum+=temp;
        temp*=-n*n;
    }
    printf("Total sum : %d",sum);
}