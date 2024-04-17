#include<stdio.h>
int main()
{
    int angle1,angle2,angle3,sum=0;
    printf("Enter the angles of the triangle: ");
    scanf("%d %d %d",&angle1,&angle2,&angle3);

    sum=angle1+angle2+angle3;
    
    if(sum==180 && angle1>0 && angle2>0 && angle3>0)
        printf("Valid triangle");
    else
        printf("Invalid triangle");
}