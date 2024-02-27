#include <stdio.h>
char myFunction();
int main() {
    char myFunction();// if this line is not declared inside main, then it should be declared before main else it will throw an error
    char result = myFunction();
    printf("Returned value: %c\n", result);
    return 0;
}


char myFunction() {
    printf("Inside myFunction\n");
    return 'A';
}
