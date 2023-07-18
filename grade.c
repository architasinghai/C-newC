#include<stdio.h>
main()
{
    int salary;
    printf("enter your salary\n");
    scanf("%d",&salary);
    if(salary>=35000)
    {
        printf("Grade A");
    }
    else if(salary>=20000 && 35000<salary)
    {
        printf("Grade B");
    }
    else if(salary>=10000 && 20000<salary)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade D");
    }
    return 0;
}