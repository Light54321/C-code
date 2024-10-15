 #include<stdio.h>
 void main( )
{
 float maths, english, chemistery,physics,cs, sum, average,percentage ;
printf("Enter the marks of maths, english, chemistery, physics,cs");
 scanf("%f%f%f%f%f",&maths,&english, &chemistery, &physics,&cs);
 sum=maths+english+chemistery+physics+cs;
 printf("the sum of all the subject is=%f\n",sum);
 average=sum/5;
printf("the average of all subject is=%f\n",average);
percentage=(sum/500)*100;
printf("The percentage of the student in mid term is= %f",percentage);
}