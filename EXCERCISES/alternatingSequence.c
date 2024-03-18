#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int end=num;
    for(int i=1;i<=num;i++,end--)
    {
        printf("%d,%d",i,end);
        
        if(i<num)
        {
            printf(",");
        }
    }
}