#include <stdio.h>
int main()
{
int i=0,sum=0,n;
printf("enter the value of numvber=");
scanf("%d",&n);
while (i<=n)
{
sum=sum+i;
i=i+1;
}
printf("%d\n",sum);
    return 0;
}