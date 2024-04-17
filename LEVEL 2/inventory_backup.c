#include<stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    int temp_len = len-1;

    int org_arr[len];
    int rev_arr[len];

    for (int i=0; i<len; i++) {
        scanf("%d", &org_arr[i]);
        rev_arr[temp_len] = org_arr[i];
        temp_len--;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d\n", rev_arr[i]);
    }

}