#include <stdio.h>

int main() {
    char str[] = "Hello";    
    printf("Pre-increment: %c\n", ++(*str));    
    printf("Post-increment: %c\n", (*str)++);   
    printf("Pre-decrement: %c\n", --(*str));
    printf("Post-decrement: %c\n", (*str)--);   
    printf("Final value: %c\n", *str);  
    return 0;
}