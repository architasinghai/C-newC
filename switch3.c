//wap for find max and minimum between 2 no.s using switch case
#include<stdio.h>
main()
{
    int ch,a=20,b=10;
    printf("Press 1 for max\n");
    printf("Press 2 for min\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
           if(a>b)
             printf("a is max\n");
           else
             printf("b is max\n"); 
        case 2:
           if(a<b)
             printf("a is min\n");
           else
             printf("b is min\n");        
    }
    return 0;

}