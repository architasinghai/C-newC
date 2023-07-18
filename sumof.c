//wap to sum digit of 3 no. like 123 =>1+2+5=8
#include<stdio.h>
main()
{
  int n=125,a,b,c,d,result;
  a=n%100; //125%100=25
  b=a%10;  //25%10=5
  c=a/10; //25/10=2
  d=n/100; //125/100=1
  result=d+c+b;
  printf("sum of %d is %d",n,result);

  return 0;
}