#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[100];

    fgets(str,sizeof(str),stdin);
    printf("Entered string: %s",str);
    
    for(int i=0;str[i]!='\n';i++)
    {
        if(str[i]!=' ')
            count++;
    }
    printf("Character count: %d\n",count);
    int l = strlen(str);
    printf("Character count: %d",l-1); // it includes '\n' character also 
}