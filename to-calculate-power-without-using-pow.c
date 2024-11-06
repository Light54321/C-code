
#include <stdio.h>
#include <math.h>
void main()
{
int i,ans=1,n,p;
printf("enter the base(n)=\n");
scanf("%d",&n);
printf("enter the power(p)=\n"),
scanf("%d",&p);
for ( i=1; i<=p;i++)
{
ans=ans*n;
}

printf("%d",ans);
}
