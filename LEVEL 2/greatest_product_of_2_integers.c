#include<stdio.h>

int main() {
    printf("Enter the number of elements in the array:");
    int n;
    scanf("%d", &n);

    int nums[n];

    printf("Enter the elements of the array:");
    for (int i=0; i<n; i++) {
        scanf("%d", &nums[i]);
    }

    int max1 = nums[0], max2 = nums[1];

    if (nums[0]<nums[1]) max1 = nums[1], max2 = nums[0];

    for (int j=2; j<n; j++) {
        if (nums[j]>max1) {
            max2 = max1;
            max1 = nums[j];
        } else if (nums[j]>max2) {
            max2 = nums[j];
        }
    }

    printf("%d\n", max1*max2);
}