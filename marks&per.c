#include<stdio.h>
main()
{
   int p,c,m,cs,eng,total;
   float per;
   printf("enter 5 sub marks\n");
   scanf("%d%d%d%d%d",&p,&c,&m,&cs,&eng);
   total=p+c+m+cs+eng;
   per=(total*100)/500;
   //per=total/5;
   printf("Total marks=%d",total);
   printf("\nPercentage=%f",per);
   
   return 0;	
}