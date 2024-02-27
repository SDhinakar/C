#include<stdio.h>

union abc{
    int a; char b; float c;
};

void main()
{
    union abc u;
    union abc *ptr=&u;
    u.a=1;
    u.b='a';
    //u.c=77.90;
    printf("a=%d\n",ptr->a);    
    printf("b=%c\n",ptr->b);
    printf("c=%f\n",(*ptr).c);
    //struct is used to store the data of different data types in a single variable
    //union is used to store the data of different data types in a single memory location
    //union is used to save memory
    //union is used to store only one value at a time
    //union is used to store the largest data type
    //struct fetches all memory to get one value leads to memory wastage but union uses only one memory location to store all the values
}