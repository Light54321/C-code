 #include<stdio.h>
 void main( )
{
 int a,b;
 printf("Pleas enter the value of a and b");
 scanf("%d%d",&a,&b);
 printf("before swapping th value of a and value of b is%d%d \n",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("after the swapping the value of a is and value of b is%d%d",a,b);
}