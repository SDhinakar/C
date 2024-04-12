#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    printf("Enter a number: ");
    scanf("%lld",&n);

    int count=(n==0)?1:(int)log10(llabs(n))+1;
    if(count==5)
        printf("%lld is a 5 digit number",n);
    else
        printf("%lld is not a 5 digit number",n);


    // if(abs(n)>=10000 && abs(n)<=99999)
    //     printf("%lld is a 5 digit number",n);
    // else
    //     printf("%lld is not a 5 digit number",n);


    // int count=0;
    // long long int temp=n;
    // while(n)
    // {
    //     count++;
    //     n/=10;
    // }

    // if(count==5)
    //     printf("%lld is a 5 digit number",temp);
    // else
    //     printf("%lld is not a 5 digit number",temp);
}
