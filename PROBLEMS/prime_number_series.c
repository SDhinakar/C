#include <stdio.h>

int main() {
int i=3;
for(i=0;i<=100;i++){
if(i==0 || i==1){
printf("%d not a prime\n",i);
}
else if(i%2==0){
printf("%d not a prime\n",i);
}
else{
printf("%d\n",i);
}
}
}