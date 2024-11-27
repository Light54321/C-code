#include <stdio.h>
#include <math.h>
void main()
{
int i,n,t;
printf("enter the table to be printed");
scanf("%d",&n);
for ( i = 1; i <11; i++)
{
    t=n*i;
    printf("%d\n",t);
}
}