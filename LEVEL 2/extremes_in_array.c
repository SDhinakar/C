#include<stdio.h>

int main(){
    int len;
    scanf("%d", &len);

    int temp;

    int max, min;
    for(int i=0; i<len; i++){
        scanf("%d", &temp);

        if (i==0){
            max=temp;
            min=temp;
        } else {
            if (temp>max) {max = temp;}
            if (temp<min) {min = temp;}
        }

    }

    printf("Maximum element is: %d\nMinimum element is: %d\n", max, min);

}