#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10; // Change the value of n as needed
    printf("Fibonacci series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    return 0;
}

// #include<stdio.h>
// int main()
// {
// int a=0,b=1,temp,n;
// scanf("%d",&n);
// for(int i=1;i<=n;i++)
// {
// printf("%d ",a);
// temp=a+b;
// a=b;
// b=temp;
// }
// }