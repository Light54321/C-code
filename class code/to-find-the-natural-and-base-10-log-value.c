#include<stdio.h>
#include<math.h>
void main ()

{
    double a,b,c;
    printf(" please write the value of a:\n" );
    scanf("%lf",&a);
 b=log(a);
 c=(log(a))/2.303;
 printf("the log base e=%.3lf\n",b);  
 printf("the log base 10=%.3lf",c);  
}
