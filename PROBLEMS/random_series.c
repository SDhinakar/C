#include<stdio.h>
int main()
{
    int a;
    printf("enter: ");
    scanf("%d",&a);
    int end=a;
    for(int i=1;i<=a;i++)
    {
        printf("%d,",i);
        if(end==1)
        {
            printf("%d",end);
            return 0;
        }
        printf("%d,",end);
        end--;
    }
}