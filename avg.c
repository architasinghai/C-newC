//

#include<stdio.h>
main()
{
  int a=1,s=0;
  float avg;
  while(a<=10)
  {
  	s=s+a; 
  	a++;
  }
  printf("sum=%d\n",s);
  avg=s/10;
  printf("avg=%f",avg);
  return 0;
	
}