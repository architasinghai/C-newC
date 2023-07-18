#include<stdio.h>
main()
{
    int r;
    float A;
    float pi;
    float C;
    pi=3.14;

    printf("enter the radius\n");
    scanf("%f",&A);
    scanf("%f",&C); 
    scanf("%d",&r);
    A=pi*(r*r);
    C=2*pi*r;

    printf("area of circle if %f m*m \n",A);
    printf("circumference of circle if %f m*m \n",C);
    return 0;
}

