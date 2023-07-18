//wap to check that given year is leap year or not
#include<stdio.h>
main()
{
    int yr;
    printf("enter a year\n");
    scanf("%d",&yr);
    if(yr%400==0)
    {
        printf("it is a leap year");
    }
    else if(yr%100==0)
    {
        printf("it is not a leap year");
    }
    else if(yr%4==0)
    {
        printf("it is a leap year");
    }
    else
    {
        printf("it is not a leap year");
    }
    return 0;
}