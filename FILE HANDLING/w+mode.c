#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char str[30];
    fp=fopen("example.txt","w+");
    if(fp==NULL){
        printf("Error in file handling");
        exit (1);
    }
    fputs("DHINA",fp);
    rewind(fp);
    char ch;
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }

    fclose(fp);
}