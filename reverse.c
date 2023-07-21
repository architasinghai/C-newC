#include<stdio.h>
main()
{
    int i,n=123,a,r=0;
    while(n!=0)
    {
        a=n%10; //123%10=3 => 12%10=2 => 1%10=1
        r=(r*10)+a; //r=(3*10)+2=32 => (32*10)+1=321
        n/10; //123/10=12 => 12/10=1 => 1/10=0
    }
    printf("reverse of %d is %d",n,r);
    return 0;
}