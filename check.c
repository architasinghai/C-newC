#include<stdio.h>
main()
{
   int n;
   printf("enter any no.\n");
   scanf("%d",&n);
   if(n==0)
   {
      printf("no. is zero");	
   } 
   else if(n>0)
   {
   	printf("no. is possitive");
   }
   else
   {
   	printf("no. is negative");
   }
   return 0;	
}
