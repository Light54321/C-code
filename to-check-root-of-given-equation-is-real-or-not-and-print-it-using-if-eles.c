#include<stdio.h>
#include<math.h>
void main()
{
double a,b,c,D,r1,r2;
printf("Enter the cofficient of (x^2),(x)and constant:\n");
scanf("%lf%lf%lf",&a,&b,&c);
D=((b*b)-(4*a*c));
printf("the value ");

 if (D>=0)
    {
        printf("equation have real root\n");
         r1=(-b+pow(D,0.5))/4*a*c;
         r2=(-b-pow(D,0.5))/4*a*c;
         printf("the root of equation are r1=%lf,r2=%lf",r1,r2);
    }

    else
    {
        printf("equation have no real root\n");
        r1=(-b+pow(D,0.5))/4*a*c;
         r2=(-b-pow(D,0.5))/4*a*c;
         printf("the root of equation are r1=%lf,r2=%lf",r1,r2);
    }
    
    }