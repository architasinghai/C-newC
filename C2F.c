//wap to convert celcius to fahrenheit
#include<stdio.h>
main()
{
    float celcius;
    float fehrenheit;
    printf("enter the temp. in celcius\n");
    scanf("%f",&celcius);
    fehrenheit=(celcius*1.8)+32;
    printf("%f of celcius in fehrenheit is %f",celcius,fehrenheit);
    return 0;
}