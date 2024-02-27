#include<stdio.h>
int main()
{
    int number=153,sum=0,digit;
    int temp=number;
    while(number>0)
    {
        digit=number%10;
        sum+=(digit*digit*digit);
        number/=10;
    }
    if(temp==sum){
        printf("Armstrong number\n");
    }
    else{
        printf("Not an armstrong number\n");
    }
}