#include <stdio.h>
#include <math.h>

int main() {
    int n = 0;
    scanf("%d",&n);
    int count;
    
    if (n == 0) {
        count = 1; // Special case: If n is 0, it has only one digit
    } else {
        count = (int)log10(n) + 1;
    }
    
    printf("%d\n", count);
    return 0;
}
