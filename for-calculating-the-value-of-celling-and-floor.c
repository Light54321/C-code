#include <stdio.h>
#include <math.h>
void main()
{
    double a,b,c;
    printf("Enter the number:\n");
    scanf("%lf",&c);
    a=ceil(c);
    b=floor(c);
    //  celing is greater integer funtion  
    printf(" celing of number:%.2lf\n",a);
    //celing is smaller integer funtion
    // .2lf% to only 2 digit print  after decimal   
     printf(" floor of number:%.2lf\n",b);
}