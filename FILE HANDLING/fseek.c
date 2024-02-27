#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char str[30];
    char ch;
    fp=fopen("example.txt","w+");/*w+ mode is used to read and write the file*/
    if(fp==NULL){
        printf("Error in file handling");
        exit (1);
    }

    fputs("i am a eee student.",fp);


    fseek(fp,3,SEEK_SET);/*SEEK_SET is the starting of the file*/
    ch=getc(fp);
    printf("%c",ch);

    fseek(fp,3,SEEK_CUR);/*SEEK_CUR is the current position of the file*/
    ch=getc(fp);
    printf("\n%c",ch);

    fseek(fp,-3,SEEK_END);/*SEEK_END is the end of the file*/
    ch=getc(fp);
    printf("\n%c",ch);

    fclose(fp);

}    