#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,choice;
printf("Enter the value of a,b\n");
scanf("%d%d",&a,&b);
printf("enter the choice.\n");
printf("1 for add\n.");
printf("2 for subtraction.\n");
printf("3 for divide.\n");
printf("your choice=");
scanf("%d",&choice);
switch (choice)
{
case 1:
{
c=a+b;
printf("c=%d",c);
}
break;
case 2:
{
c=a-b;
printf("c=%d",c);
}
break;
case 3:
{
c=a/b;
printf("c=%d",c);
}
break;
default:
{
printf("your choice is invalide");
}
break;
}
}