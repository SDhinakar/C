#include<stdio.h>
#include<math.h>
int main()
{
    long long int n=0;
    printf("Enter a number: ");
    scanf("%lld",&n);
    int count=0;
    long long int temp=n;

    // while(n!=0)
    // {
    //     n/=10;
    //     count++;
    // }
    
    count=(n==0)?1:(int)log10(abs(n))+1;  //log10() is a function in math.h which returns the base 10 logarithm of a number
    printf("Number of digits: %d\n",count);

    if(count==5)
        printf("%lld is a 5 digit number",temp);
    else
        printf("%lld is not a 5 digit number",temp);
}