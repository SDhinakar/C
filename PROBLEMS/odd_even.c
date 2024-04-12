#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a&1)
        printf("odd");
    else
        printf("even");

//     if(a%2==0)
//         printf("even");
//     else
//         printf("odd");
}