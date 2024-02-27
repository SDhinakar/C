#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char str[30];
    char ch;
    fp=fopen("example.txt","r");/*w+ mode is used to read and write the file*/
    if(fp==NULL){
        printf("Error in file handling");
        exit (1);
    }
    fseek(fp,5,SEEK_SET);
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    rewind(fp);
    while((ch=fgetc(fp))!=EOF)//EOF is the End of the file
    {
        printf("%c",ch);
    }
   
    fclose(fp);

}    