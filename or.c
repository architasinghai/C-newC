//Program For Or Operator
#include<stdio.h>
main()
{
   int n=10;
   if(n==10 || n>=5)
   {
   	printf("true\n");
   }
   if(n>=5 || n<=50)
   {
   	printf("true\n");
   }
   if(n>=20 || n!=10)
   {
   	printf("condition not satisfied");
   }
   

   return 0;	
}