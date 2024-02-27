#include<stdio.h>

void add(int a,int b) { printf("Add : %d\n",a+b); }
void sub(int a,int b) { printf("Sub : %d\n",a-b); }
void mul(int a,int b) { printf("Mul : %d\n",a*b); }
void div(int a,int b) { printf("Div : %d\n",a/b); }
void rem(int a,int b) { printf("Rem : %d\n",a%b); }

int main()
{
    int ch,a,b;
    void (*fptr[10])(int , int )={add,sub,mul,div,rem};
    printf("Enter two numbers a and b : ");
    scanf("%d %d",&a,&b);
    printf("Enter choice :");
    scanf("%d",&ch);
    (*fptr[ch])(a,b);

}
/*void main()
{
    int ch,a,b;
    printf("Enter two numbers a and b : ");
    scanf("%d %d",&a,&b);
    printf("Enter choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: add(a,b); break;
        case 2: sub(a,b); break;
        case 3: mul(a,b); break;    
        case 4: div(a,b); break;
        case 5: rem(a,b); break;
        default:printf("Enter valid choice !");
    }
}*/