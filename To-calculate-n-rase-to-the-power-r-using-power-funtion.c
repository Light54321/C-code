#include <stdio.h>
#include <math.h>
void main()
{
float a,b,c;
printf("please enter the value of base and power:\n");
scanf("%f%f",&a,&b);
printf("The value of base and power is:%f%f\n",a,b);
c=pow(a,b);
printf("The ans is %f",c);
}