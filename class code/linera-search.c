#include<stdio.h>
int main()
{
int i,count=0,find,a[10],n,j;
printf("enter the no. of digit you going to enter=");
scanf("%d",&n);
printf("element of array is=\n");
for ( i=0; i <n; i++)
{
    scanf("%d",&a[i]);
}
printf("enter the values you want to find=");
scanf("%d",&find);
for (j=0; j<n;j++)
{
    if (find=a[i])
{
    count++;
}
}
printf("%d",count);
if (count==0)
{
    printf("element  is not in array");
}
return 0;
}