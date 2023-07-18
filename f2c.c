#include<stdio.h>
main()
{
   float c,f;
   printf("enter the temprature in fahreheit");	
   scanf("%f",&f);
   c=(f-32)*5/9;   
   printf("%f",c); 
   return 0;	
}