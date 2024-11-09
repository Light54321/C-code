#include<stdio.h>
int main()
{
int i,base,power,ans=1;
printf("enter the value of base=");
scanf("%d",&base);
printf("enter the value of power=");
scanf("%d",&power);
for (i=0; i<power;i++)
{
    ans=base*ans;
}
 printf("ans=%d\n",ans);
return 0;
}