#include<stdio.h>
main()
{
    int n;
    printf("enter any integer no. b/w 0-20");
    scanf("%d",&n);
    if(n>=0 && n<=10)
    {
    	printf("%d in range 0-10",n);
	}
	else if(n>=11 && n<=15)
    {
    	printf("%d in range 11-15",n);
	}
	else if(n>=16 && n<=20)
    {
    	printf("%d in range 16-20",n);
	}
	else
	{
		printf("Invalid Range");
	}
    return 0;	
}