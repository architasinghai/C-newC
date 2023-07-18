//wap to calcualte area of circle/rectangle/square using switch case
#include<stdio.h>
main()
{
    int  ch;
    printf("Press 1 for area of circle\n");
    printf("Press 2 for area of rectangle\n");
    printf("Press 3 for area of square\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            int r,area;
            printf("enter the radius\n");
            scanf("%d",&r);
            area=(float)3.14*r*r;
            printf("area of circle is %d\n",area);
            break;

        case 2:
            int l,b,area;
            printf("enter the length and breadth\n");
            scanf("%d%d",&l,&b);
            area=l*b;
            printf("area of rectangle is %f\n",area);
            break;

        case 3:
            int side,area;
            printf("enter the side\n");
            scanf("%d",&side);
            area=side*side;
            printf("area of square is %d\n",area);
            break;
    }
    return 0;
}


    