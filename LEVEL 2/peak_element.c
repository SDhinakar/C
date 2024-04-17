#include <stdio.h>

void findPeaks(int arr[], int n) {
    printf("Peak element(s): ");

    for (int i = 0; i < n; i++) 
    {
        if ((i==0 || arr[i-1] <= arr[i]) && (i==n-1 || arr[i+1] <= arr[i]))
            printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);


    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findPeaks(arr, n);

    return 0;
}
