#include <stdio.h>

int* createInt() {
    int num = 10;
    int* ptr = &num;
    return ptr;
}

int main() {
    int* danglingPtr = createInt();
    printf("Dangling pointer value: %d\n", *danglingPtr);
    return 0;
}
