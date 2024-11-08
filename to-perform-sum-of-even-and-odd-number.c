#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0 ;
printf("please enter the number=");
scanf("%d",n);
for ( i=0; i<=1000; i+1)
{
    if (n%2==0)
    {
    sum=sum+n;
    }
    else
    {
       sum=sum+n;
    }
}
printf("sum of the number=%d",sum);

}