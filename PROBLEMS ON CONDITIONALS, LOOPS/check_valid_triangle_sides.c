#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d",&side1,&side2,&side3);
    
    if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
        printf("Valid triangle");
    else
        printf("Invalid triangle");
}