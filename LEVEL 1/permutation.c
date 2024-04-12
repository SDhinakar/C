#include<stdio.h>

int factorial (int n){
    int temp = 1;
    while (n!=0)
    {
        temp *= n;
        n--;
    }

    return temp;  
}

int main(){
    int x,y;
    scanf("%d%d", &x, &y);

    if(x-y < 0) {
        printf("Invalid");
        return 0;
    }
    int permutation = factorial(x)/factorial(x-y);

    printf("%d", permutation);
}