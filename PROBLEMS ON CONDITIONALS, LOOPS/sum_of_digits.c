 //the sum of digits of a number and print only if the sum is less than 10,else sum again example(932=9+3+2 = 14(greater than 10),
 //so 1+4=5(lesser than 10),thus 5  will be the output 

// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int su(int n)
{
    int sum=0;
    if(n<=0)
        return 0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    if(sum>=10)
        su(sum);
    else
        return sum;
}
int main() {
    int n,sum=0,count=0;
    scanf("%d", &n);
    sum=su(n);
    printf("Sum is  : %d",sum);
}