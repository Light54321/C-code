#include <stdio.h>
#include<math.h>
void main()
{
float a,b,c,s,area;
printf("Please enter the length of 3 side of the triangle.\n:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
printf("Semiperimeter of the give triangle is:%f\n",s);
area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
/* or you can use this line in place of  above line (area= sqrt(s*(s-a)*(s-b)*(s-c));).
But only for square  not for cube or any other power .*/
printf("Area of the give triangle is: %f\n",area);
}