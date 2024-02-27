// File: main.c
#include <stdio.h>
#include "extern_help.c"

extern int globalVariable; // Declaration of globalVariable

int main() {
    // Accessing globalVariable
    printf("The value of globalVariable is: %d\n", globalVariable);

    // Modifying globalVariable
    globalVariable = 100;

    // Accessing globalVariable again after modification
    printf("Now, the value of globalVariable is: %d\n", globalVariable);

    return 0;
}
