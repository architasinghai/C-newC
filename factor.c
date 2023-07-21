#include<stdio.h>
main()
{
    int i,n;
    printf("enter the no.\n");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d is the factor of %d\n",i,n);
        }
        else
        {
            printf("%d is not the factor of %d\n",i,n);
        }
    }
    return 0;
}