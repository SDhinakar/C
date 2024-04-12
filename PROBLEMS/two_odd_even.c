#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);;
    if(a%2==0 && b%2==0)
        printf("Both numbers are even\n");
    else if(a%2!=0 && b%2!=0)
        printf("Both numbers are odd\n");
    else
        printf("One number is odd and the other is even\n");
}