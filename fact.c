//wap to print sum of this series
//1/1+1/2+1/3+.................+1/n
//wap to print sum of this series
//1/1!+1/2!+1/3!+.................+1/n!

#include<stdio.h>
main()
{
  int i,n,f=1;
  float a=1,div,sum=0;
  
  printf("enter limit\n");
  scanf("%d",&n);
  
  for(i=1; i<=n; i++)
  {
  	f=f*i;
  	div=a/f; 
	sum=sum+div; 
	printf("fact=%d\n",f);
	printf("div=%f\n",div);	
	printf("sum= %f\n",sum);
  }
  return 0;
	
}