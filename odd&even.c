//wap to print odd and even between 1 to 10

#include<stdio.h>
main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(i%2==0)
            printf("%d is even no.\n",i);
        else
            printf("%d id odd no.\n",i);
    }

}