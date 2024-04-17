#include<stdio.h>

int main() {
    int len, even_product = 1, odd_sum = 0;
    scanf("%d", &len);

    int arr[len];

    for (int i=0; i<len; i++) {
        scanf("%d", &arr[i]);
        if (arr[i]%2 == 0) {
            even_product *= arr[i];
        } else {
            odd_sum += arr[i];
        }
    }   

    printf("%d\n%d", even_product == 1 ? 0 : even_product, odd_sum);
}