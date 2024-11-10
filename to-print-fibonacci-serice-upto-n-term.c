#include<stdio.h>
int main()
{int i,n_1=0,n_2=1,term;
printf("0");
printf("1");
   for ( i=2;i<=10000;i+1)
   {
     term=(n_1)+(n_2);
         n_1=n_2;
        n_2=term;
        printf("%d",term);
   }
   }