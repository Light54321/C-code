 #include<stdio.h>
 void main( )
{
double a,b,c,d;
printf("Please enter the principal amount,rate of interest,number of compound period");
scanf("%lf%lf%lf",&a,&b,&c);
d=a*(((1+b)*c)-a);
printf("Your compound interst is:%lf",d);
}