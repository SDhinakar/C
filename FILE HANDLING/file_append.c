#include<stdio.h>
#include<stdlib.h>
int main()


{
    FILE *fp;
    char str[30];
    fp=fopen("example.txt","a");
    if(fp==NULL){
        printf("Error in opening file");
        return 0;
    }
    printf("Enter a string: ");
    scanf("\n%s",str);

    fputs(str,fp);

    printf("Data written to file\n");
    fclose(fp);
}