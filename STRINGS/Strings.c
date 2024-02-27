#include <stdio.h>
#include<string.h>
int main() 
{
    char a[100];
    scanf("%s",&a);
    printf("\n the entered string is : %.5s", a);
    printf("\n the entered string is : %10.5s", a);
    printf("\n%s",&a[2]);
    printf("\n");
    puts(a);

}
