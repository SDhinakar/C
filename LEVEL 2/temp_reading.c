#include<stdio.h>

void main() {
    int length;
    scanf("%d",&length);

    int arr[length];

    for (int i=0; i<length; i++) {
        scanf("%d", &arr[i]);
    }

    int low=arr[0], max=arr[0];

    for (int i=0; i<length; i++) {
        if (arr[i]<low) {
            low=arr[i];
        } else if (arr[i]>max) {
            max=arr[i];
        }
    }

    printf("Minimum Temperature: %d\nMaximum Temperature: %d", low, max);
}