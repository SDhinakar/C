#include<stdio.h>
int main()
{
    char hex[20];
    scanf("%s",&hex);
    int decimal=0,i=0;
    while(hex[i]!='\0')
    {
        char temp=hex[i];
        if(temp>='0' && temp<='9')
            decimal=decimal*16+(temp-'0');
        else if(temp>='A' && temp<='F')
            decimal=decimal*16+(temp-'A'+10);
        else if(temp>='a' && temp<='f')
            decimal=decimal*16+(temp-'a'+10);
    }
    printf("Decimal Number: %d",decimal);
}