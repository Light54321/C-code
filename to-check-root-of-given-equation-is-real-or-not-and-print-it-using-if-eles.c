#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,D,r1,r2,i=pow(-1,0.5);
printf("Enter the cofficient of (x^2),(x)and constant:\n");
scanf("%d%d%d",&a,&b,&c);
D=((b*b)-(4*a*c));
 if (D>=0)
    {
        printf("equation have real root\n");
    }

    else
    {
        printf("equation have no real root\n");
    }
 r1=(-b+pow(D,0.5))/4*a*c;
 r2=(-b-pow(D,0.5))/4*a*c;
printf("the root of equation are r1=%d,r2=%d",r1,r2);


}