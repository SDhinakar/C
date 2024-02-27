#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[30];
    char ch;
    int count=1; //initialize count to 1 to count the first line to get the correct number of lines
    fp=fopen("example.txt","r");
    if(fp==NULL){
        printf("Error in opening file");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF){//if the file is not empty
        if(ch=='\n'){
            count++;
        }
    }
    printf("Number of lines in the file is %d",count);
    fclose(fp);
}