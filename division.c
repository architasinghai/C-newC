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
   if(per>60)
   {
       printf("I div");
   }
   else if(per>45 && 60<per)
   {
       printf("II dic");
   }
   else if(per>33 && 45<per)
   {
       printf("III div");
   }
   else
   {
       printf("Fail");
   }
   
   return 0;	
}