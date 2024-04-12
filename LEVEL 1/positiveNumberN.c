#include<stdio.h>

int main() {
    int number = 0, start=5;
    scanf("%d", &number);

    for(int i=1; i<=number; i++) {
        for (int j=0; j<i; j++){
            printf("%d ", start);
            start--;
        }
        start = 5;
        printf("\n");
    }
}