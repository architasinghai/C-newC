#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter array elements: ");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d",&a[3][3]);
        }
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("\t\t%d",a[i][j]);
        }
        printf("\n\n");
    }
    for(j=0; j<=2; j++)
    {
        printf("\t\ta[%d][%d",i,j);
    }
    printf("\n\n");
    for(j=0; j<=2; j++)
    {
        printf("\t\t%p",&a[i][j]);
    }
    printf("\n\n\n\n");
    return 0;
}
