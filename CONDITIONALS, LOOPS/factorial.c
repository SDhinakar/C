// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("factorial is: %d",fact);
}

// int fact(int n)
// {
//     if(n==0 && n==1)
//         return 1;
//     else 
//         return n*fact(n-1);
// }