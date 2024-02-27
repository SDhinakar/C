#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    //char str[30];
    
    fp=fopen("example.txt","r+");
    if(fp==NULL){
        printf("Error in opening file");
        return 0;
    }
    fputs("Hello",fp);
    fclose(fp);
    printf("Data written to file\n");


    printf("Data read from file : ");
    fp=fopen("example.txt","r");
    char ch;    
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
}