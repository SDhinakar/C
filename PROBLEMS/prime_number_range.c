#include <stdio.h>
int main() 
{
    int i;
    for(i=0;i<=100;i++)
    {
        if(i==0 || i==1)
        {
            continue;
        }
        else if(i%2==0 && i!=2)
        {
            continue;
        }
        else
        {
            printf("%d\n",i);
        }
    }
}