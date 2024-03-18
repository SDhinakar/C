#include<stdio.h>

int main() {
    int start=1, before=0, total;
    scanf("%d", &total);

    for (int i=0; i<total; i++) {
        printf("%d,", before);
        int t = start;
        start += before;
        before = t;
    }
}