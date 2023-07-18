//wap a program to find middle number between 3 no.s
#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter any 3 no.\n");
    scanf("%d%d%d",&a,&b,&c);
    if(b>a && a>c || c>a && a>b)
    {
        printf("middle no. is a");
    }
    if(a>b && b>c || c>b && b>a)
    {
        printf("middle no. is b");
    }
    if(a>c && c>b || b>c && c>a)
    {
        printf("middle no. is c");
    }
    return 0;
}