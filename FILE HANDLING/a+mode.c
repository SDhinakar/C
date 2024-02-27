#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char str[30];
    fp=fopen("example.txt","a+");
    if(fp==NULL){
        printf("Error in file handling");
        exit (1);
    }
    char ch;
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }

    fputs("\n Dhinakar Shanmugam",fp);


    fclose(fp);
}