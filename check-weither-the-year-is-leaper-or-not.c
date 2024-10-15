 #include<stdio.h>
 void main( )
{
 int a;
 printf("Pleas enter the year:\n");
 scanf("%d",&a);
 ((a%4==0)&&(a%400==0||a%100!=0))?printf("year is leaper."):
 printf("year is not leaper");
}