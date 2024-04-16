#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target;
    
    printf("Enter the target element: ");
    scanf("%d", &target);
    
    int found = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] == target) {
            found = 1;
            continue;
        }
        printf("%d ", arr[i]);
    }
    
    if (!found) {
        printf("Target element not found in the array.\n");
    }
    
    return 0;
}
