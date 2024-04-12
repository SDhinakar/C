#include<stdio.h>
int gcd (int a, int b) {
    if (b==0) 
    {
        return a;
    }
    return gcd(b, a%b);  // Euclidean algorithm.
}

int main() {
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    int sumNum = (x1*y2)+(x2*y1);
    int sumDen = y1*y2;

    int simplifier = gcd(sumNum, sumDen);

    sumDen /= simplifier;
    sumNum /= simplifier;

    printf("%d/%d", sumNum, sumDen);
}