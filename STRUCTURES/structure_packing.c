#include<stdio.h>
#pragma pack (1) //this is used to pack the structure members together without any padding

struct abc{
    int a; char b; float c; double d;
};

void main()
{
    struct abc s={1,'a',77.90,88.90};
    printf("%d",sizeof(s));
}