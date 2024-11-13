#include<stdio.h>
#include<conio.h>
int main()
{
int rev=0,temp,i,n,d,result,algo=0,t;
printf("enter the number");
scanf("%d",&n);
temp=n;
while (n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if (rev==temp)
{
printf("The given number is palandrom\n");
}
else
{
    printf("The given number is not palandrom\n");
}

while (n>0)
{
t=n%10;
algo= algo+(t*t*t);
n=n/10;
}
if (algo==temp)
{
printf("The given number is  Armstrong\n.");
}
else
{
    printf("The given number is not  Armstrong\n.");
}

}