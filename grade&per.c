#include<stdio.h>
main()
{
    int p,c,m,cs,eng,total;
   float per;
   printf("enter 5 sub marks\n");
   scanf("%d%d%d%d%d",&p,&c,&m,&cs,&eng);
   total=p+c+m+cs+eng;
   per=(total*100)/500;
    if(per>=75)
    {
        printf("Grade A");
    }
    else if(per>=60 && 75<per)
    {
        printf("Grade B");
    }
    else if(per>=45 && 60<per)
    {
        printf("Grade C");
    }
    else if(per>=33 && 45<per)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade E");
    }
    return 0;
}