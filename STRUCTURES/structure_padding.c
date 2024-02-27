#include <stdio.h>

// Structure with padding
struct PersonWithPadding {
    char name[20];
    int age;
    float height;
};

int main() {
    // Print the size of the structure with padding
    printf("Size of struct Person With Padding: %zu bytes\n", sizeof(struct PersonWithPadding));
    //padding refers to the bytes that are added to the structure to make it a multiple of 4 bytes(extra space for neat alignment)
    return 0;
}
