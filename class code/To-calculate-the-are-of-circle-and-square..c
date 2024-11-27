#include<stdio.h>
void main()
{
float radius,pi=3.14,area,length,areaofsquare;
printf(" please enter the radius of circle");
scanf("%f",&radius);
area=pi*radius*radius;
printf("the area of circle is %f\n",area);
printf("");
printf("please enter the length of square side");
scanf("%f",&length);
areaofsquare=length*length;
printf("area of square is %f",areaofsquare);
}