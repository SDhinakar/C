#include <stdio.h>

int main() 
{
    int i=3;
    if(i==0 || i==1)
    {
        printf("not prime");
    }
    else if(i%2==0)
    {
        printf("not prime");
    }
    else
    {
        printf("prime");
    }
}