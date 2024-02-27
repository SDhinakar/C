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

    char input[30];         
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    fputs(input, fp);

    fseek(fp,3,SEEK_SET);/*SEEK_SET is the starting of the file*/
    ch=fgetc(fp);
    printf("%c",ch);
    printf("\n%d\n",ftell(fp));

    fseek(fp,3,SEEK_CUR);/*SEEK_CUR is the current position of the file*/
    ch=getc(fp);
    printf("\n%c",ch);
    printf("\n%d\n",ftell(fp));

    fseek(fp,-1,SEEK_END);/*SEEK_END is the end of the file*/
    ch=getc(fp);
    printf("\n%c",ch);
    printf("\n%d",ftell(fp));

    fclose(fp);

}    