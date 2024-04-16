#include <stdio.h>

void arithmeticProgression(int a, int d, int n) 
{
    int i, term = a;
    printf("Arithmetic Progression: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", term);    
        term += d;
    }
    printf("\n");
}

void geometricProgression(int a, int r, int n) 
{
    int i, term = a;
    printf("Geometric Progression: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", term);
        term *= r;
    }
    printf("\n");
}

int main() 
{
    int a = 2; // first term
    int d = 3; // common difference for AP
    int r = 2; // common ratio for GP
    int n = 5; // number of terms

    arithmeticProgression(a, d, n);
    geometricProgression(a, r, n);

    return 0;
}
