#include<stdio.h>

int main() {
    int len = 0;
    scanf("%d", &len);
    int arr[len];
    for (int i=0; i<len; i++) {
        scanf("%d", &arr[i]);
    }

    int temp = arr[len-1];

    for(int i=len-1; i>0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;

    for (int i=0; i<len; i++) {
        printf("%d\n", arr[i]);
    }
}