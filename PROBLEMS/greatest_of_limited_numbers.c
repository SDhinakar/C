#include <stdio.h>

int main() {
   int a,b,c,d;
   scanf("%d %d %d %d",&a,&b,&c,&d);
   if(a>b&&a>c&&a>d){
       printf(" a is greater %d",a);
   }
   else if(b>c&&b>d){
       printf(" b is greater %d",b);
   }
   else if(c>d){
       printf("c is greater %d",c);
   }
   else{
       printf("d is greater %d",d);
   }

    return 0;
}