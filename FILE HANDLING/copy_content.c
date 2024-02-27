#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1=NULL,*f2=NULL;
    char c;

    f1=fopen("example.txt","r");
    if(f1==NULL)
    {
        printf("File not found");
        exit(1);
    }

    f2=fopen("abc.txt","w");
    if(f2==NULL)
    {
        printf("File not found");
        exit(1);
    }

    while((c=fgetc(f1))!=EOF)
    {
        fputc(c,f2);
    }

    while((c=fgetc(f2))!=EOF)
    {
        printf("%c",c);
    }
    
    fclose(f1);
    fclose(f2);
    printf("File copied successfully");

    return 0;
}