#include <stdio.h>
#include <string.h>

int main() {
    int value;
    char s1[30], s2[30];
    int flag=0;

    
    printf("s1:");
    gets(s1);
    printf("s2:");
    gets(s2);
    value = strcmp(s1, s2);
    
    if (value == 0) {
        printf("same");
    } else {
        printf("not same");
    }//manual calculation
    for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i]){
            flag=1;
            break;
        }
    }
    
    if(flag==1)
    {
        printf("not same");
    }
    else
    {
        printf("same");
    }
    
    return 0;
}

   