 #include<stdio.h>
 void main( )
{
 float maths, english, chemistery,physics,cs, sum, average,p ;
printf("Enter the marks of maths, english, chemistery, physics,cs:\n");
 scanf("%f%f%f%f%f",&maths,&english, &chemistery, &physics,&cs);
 sum=maths+english+chemistery+physics+cs;
p=(sum/500)*100;
if (p>90&&p<=100)
{
printf("grade is A");  
} 
else if(p>80&&p<=90)
{
    printf("grade is B");
}
else if(p>70&&p<=80)
{
    printf("grade is C");
}
else if(p>60&&p<=70)
{
    printf("grade is C");
}
else
{
    printf("grade is D");
}

}
