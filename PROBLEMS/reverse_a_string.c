#include <stdio.h>
#include<string.h>
int main() {
         int i,l;
         char ch;
         char s1[30]="jayanth";
         l=strlen(s1);
         for(i=0;i<(l/2);i++){
             ch=s1[i];
             s1[i]=s1[l-1-i];
             s1[l-1-i]=ch;
          
         }
           printf("%s",s1); 
}