
#include <stdio.h>

int main() {
    int n;
    char alph = 'A';

    printf("Input the number of Letters (less than 26) in the Pyramid: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int blk = 1; blk <= n - i; blk++)
            printf("  ");

        for (int j = 1; j <= i; j++)
            printf("%c ", alph++);

        alph -=2;

        for (int j = 1; j <= i - 1; j++)
            printf("%c ", alph--);

        alph = 'A';

        printf("\n");
    }
    return 0;
}
