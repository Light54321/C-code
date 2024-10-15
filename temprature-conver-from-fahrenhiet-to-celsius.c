 #include<stdio.h>
 void main( )
{
float a,b;
printf("Please enter the temprature(fahrenhiet)");
scanf("%f",&a);
b=(a-32)*(5/9);
printf("Temprature in celsius:%f",b);
}