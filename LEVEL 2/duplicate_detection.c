#include<stdio.h>

int main() {
    int len;
    scanf("%d", &len);

    int arr[len];
    for(int i=0; i<len; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicate_count = 0;

    for (int i=0; i<len; i++) {
        for (int j=i+1; j<len; j++) {
            if (arr[i] == arr[j]) 
            {
                duplicate_count++;
            }
        }
    }

    printf("%d", duplicate_count);
}