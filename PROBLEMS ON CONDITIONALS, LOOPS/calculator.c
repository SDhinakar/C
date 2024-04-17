#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    int op;
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            printf("Add : %.2f",a+b);
            break;
        case 2:
            printf("Sub : %.2f",a-b);
            break;
        case 3:
            printf("Mul : %.2f",a*b);
            break;
        case 4:
            if(b==0)
            {
                printf("Divide by zero : error");
                return 0;
            }   
            printf("Div : %.2f",a/b);
            break;
        case 5:
            printf("Mod : %d",(int)a%(int)b);
            break;
        case 6:
            printf("Power : %.2f",pow(a,b));
            break;
        default:
            printf("Invalid operation");

    }
}