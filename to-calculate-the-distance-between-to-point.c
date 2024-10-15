#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,x,y,z,l;
printf(" Please enter the corrdinate(x,y,z)of first point:\n");
scanf("%f%f%f",&a,&b,&c);
printf(" Please enter the corrdinate(x,y,z)of second point:\n");
scanf("%f%f%f",&x,&y,&z);
l=pow(pow((x-a),2)+pow((y-b),2)+pow((z-c),2),0.5);
printf("distance between two point is %f:",l);
}