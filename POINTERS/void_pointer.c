#include <stdio.h>

int main() {
    void *vp;
    int a=5;
    float b=1.5;
    char c='0';
    vp=&a;
    printf("Value: %d\n", *(int*)vp);

    vp=&b;
    printf("Value: %f\n", *(float*)vp);

    vp=&c;
    printf("Value: %c",*(char*)vp);
    return 0;
    //we can assign any type of pointer to void pointer(i mean any type of datatypes)
}
