#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d;
printf("Enter the cofficient of (x^2),(x)and constant\n");
scanf("%d%d%d",&a,&b,&c);
d=((b*b)-(4*a*c));
 if (d>=0)
    {
        printf("equation have real root");
    }

    else
    {
        printf("equation have no real root");
    }

}