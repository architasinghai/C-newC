//wap to check the given no. is even or odd

#include<stdio.h>
main()
{
    int n;
    printf("enter any no.\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("n is even",n);
    }
    else
    {
        printf("n is odd",n);
    }
    return 0;
}