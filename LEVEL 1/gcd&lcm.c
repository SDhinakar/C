#include<stdio.h>
int gcd (int a, int b) {
    if (b==0) 
    {
        return a;
    }
    return gcd(b, a%b); // Euclidean algorithm.
}
    
int  main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int gcd_value=gcd(a,b);
    int lcm=a*b/gcd_value;
    printf("lcm:%d\ngcd:%d",lcm,gcd_value);
}