#include<stdio.h>
main()
{
    int a,b,c,d; 
    printf("enter any 4 no.\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("a is max");
    }
    else if(b>c && b>d)
    {
        printf("b is max");
    }
    else if(c>d)
    {
        printf("c if max");
    }
    else
    {
        printf("d is max");
    }
    return 0;
}