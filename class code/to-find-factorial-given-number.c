
#include <stdio.h>
#include <math.h>
void main()
{
int i,fact=1,n;
printf("enter the number=");
scanf("%d",&n);
for ( i=1; i<=n; i++)
{
fact=fact*i;
}
printf("%d",fact);
}