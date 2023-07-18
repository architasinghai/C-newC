//wap for sum and average using switch case
#include<stdio.h>
main()
{
    int ch,a=10,b=20,sum,average,result;
    printf("press 1 for sum\n");
    printf("press2 for average\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {  
        case 1:
             result=a+b;
             printf("sum=%d\n",result);
             break;
        case 2:
             result=a+b/2;
             printf("average=%d\n",result);
             break;
    }
    return 0;
}