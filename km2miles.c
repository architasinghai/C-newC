//wap to convert kilometer to miles
#include<stdio.h>
main()
{
    float km;
    float miles;
    printf("enter length in kilometers\n");
    scanf("%f",&km);
    miles = (0.621371*km);
    printf("\n %f of kilometers in milimeters is %f",km,miles);
    return 0;
}