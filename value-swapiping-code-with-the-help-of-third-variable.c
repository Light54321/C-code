 #include<stdio.h>
 void main( )
{
 int a,b,temp;
 printf("Pleas enter the value of a and b");
 scanf("%d%d",&a,&b);
 printf("before swapping th value of a and value of b is%d%d",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("after the swapping the value of a is and value of b is%d%d",a,b);
 return 0;
}