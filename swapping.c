//Wap for swapping of no. without using third variable
#include<stdio.h>
main()

{
    int a=10, b=20;
    printf("before swap a=%d b=%d");
    a=a+b;
    b=b-a;
    a=a-b;
    printf("\nafter swap a=%d b=%d",a,b);
    return 0;
}