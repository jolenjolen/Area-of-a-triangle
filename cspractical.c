#include<stdio.h>
int main()
{
    int area,b,h;
    printf("\nenter the base and height of the triangle (in cm) respectively\n");
    scanf("%d%d",&b,&h);
    area=0.5*b*h;
    printf("the area of the triangle is %d",area);
    return 0;
}