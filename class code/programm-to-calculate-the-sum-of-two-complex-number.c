#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,f,i;
printf(" For 1 complex number \n");
printf(" Please enter value of real and imaginary number:\n");
scanf("%f%f",&a,&b);
printf(" For 2 complex number\n");
printf(" Please enter value of real and imaginary number:\n");
scanf("%f%f",&c,&d);
e=a+c;
f=b+d;
//in this below statment were were %f is written there it will put the value of e and f.
printf(" the sum o two complex no is:%f+%fi",e,f);
}
