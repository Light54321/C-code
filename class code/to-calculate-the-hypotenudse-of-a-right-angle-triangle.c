#include <stdio.h>
#include <math.h>
void main()
{
float a,b,c;
printf("Please enter the height and base of given triangle:\n");
scanf("%f%f",&a,&c);
c=pow( pow(a,2)+pow(c,2),0.5);
printf("The hypotenuse of the given triangle is%f:",c);
}