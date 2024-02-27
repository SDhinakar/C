#include<stdio.h>
#include<stdlib.h>

int main() {
    int* ptr = malloc(5 * sizeof(int));
    free(ptr);// Deallocate the memory to create a dangling pointer
    // To avoid dangling pointer, set it to NULL
    ptr = NULL;
    printf("Dangling pointer value: %d\n", (void*)ptr);

    return 0;
}
