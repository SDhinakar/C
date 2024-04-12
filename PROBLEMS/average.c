#include<stdio.h>
int main()
{
    int len=0;
    scanf("%d",&len); //taking input of number of subjects (5 in this case
    int marks[len],sum=0;
    printf("Enter marks of %d subjects: ",len);
    for(int i=0;i<len;i++)
    {
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    float avg=sum/5.0;
    if(avg>=90)
    {
        printf("Grade: A+");
    }
    else if(avg>=80)
    {
        printf("Grade: A");
    }
    else if(avg>=70)
    {
        printf("Grade: B");
    }
    else if(avg>=60)
    {
        printf("Grade: C");
    }
    else if(avg>=50)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade: F");
    }
}