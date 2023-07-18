//wap to convert miles to kilometers
#include<stdio.h>
main()
{
    float km;
    float miles;
    printf("enter length in miles\n");
    scanf("%f",&miles);
    km = (0.621371*miles);
    printf("\n %f of miles in kilometers is %f",miles,km);
    return 0;
}