#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c;
    printf("Enter the number:\n");
    scanf("%f",&c);
    a=ceil(c);
    b=floor(c);
    //  celing is greater integer funtion  
    printf(" celing of number:%f\n",a);
    //celing is smaller integer funtion  
     printf(" floor of number:%f\n",b);
}