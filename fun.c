#include<stdio.h>
#include<conio.h>
void addition();
void main()
{
    clrscr();
    addition();
    getch();
}
void addition()
{
    int a,b,c;
    printf("\n enter 2 no.");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n Addition is = %d",c);
}