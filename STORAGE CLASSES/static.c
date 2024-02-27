#include<stdio.h>
void display();
void main()
{
    display();
    printf("\n");
    display();
}

void display()
{
    static int x=10;//scope of static variable is within the block
    x+=10;       //lifetime of static variable is throughout the program
    printf("%d\n",x);

    int y=10;
    y+=10;
    printf("%d\n",y);//lifetime of auto variable is within the block
}