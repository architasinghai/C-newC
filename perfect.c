#include<stdio.h>
int main()
{
  int i,n,r,sum=0;
  printf("enter a number\n");
  scanf("%d",&n);
  i=1;
  while(i<n)
  {
    r=n%i;
    if(r==0)
    {
      sum=sum+i;
    }
  }
  if(sum==n)
   printf("%d is a perfect no.");
  else
   printf("\n %d is not a perfect no.");
 return 0;   
}