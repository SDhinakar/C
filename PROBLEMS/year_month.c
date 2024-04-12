#include<stdio.h>
int main()
{
    long long int year,month;
    printf("Enter the year and month: ");
    scanf("%lld %lld",&year,&month);
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        if(month==2)
            printf("29 days");
        else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
            printf("31 days");
        else if(month==4 || month==6 || month==9 || month==11)
            printf("30 days");
        else
            printf("Invalid month");
    }
    else
    {
        if(month==2)
            printf("28 days");
        else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
            printf("31 days");
        else if(month==4 || month==6 || month==9 || month==11)
            printf("30 days");
        else
            printf("Invalid month");
    }
}