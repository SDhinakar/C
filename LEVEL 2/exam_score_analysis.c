#include<stdio.h>

int main() {
    int len;
    scanf("%d", &len);

    int max=0;
    for (int i=0; i<len; i++) {
        int temp;
        scanf("%d", &temp);

        if (i==0) max=temp;
        else if (temp>max) max=temp;
    }

    printf("%d", max);
}