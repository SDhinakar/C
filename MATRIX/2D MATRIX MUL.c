#include<stdio.h>
#define N 50

int main() {
    int a[N][N], b[N][N], c[N][N], i, j, m, n, p, q, k, sum = 0;
    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &p, &q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("ELEMENTS OF FIRST ARRAY:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("ELEMENTS OF SECOND ARRAY:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    if (n != p) {
        printf("CANNOT BE MULTIPLIED\n");
    } else {
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                sum = 0;
                for (k = 0; k < n; k++) {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
    }
    printf("\nTHE MULTIPLICATION OF TWO MATRICES IS:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
