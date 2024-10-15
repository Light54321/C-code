 #include<stdio.h>
 void main( )
{
 float basicsalaray,DA,HRA,Fund,grosssalary,netsalaray;
 printf("Please enter your basic salaray=");
 scanf("%f",&basicsalaray);
 printf("Your basic salaray %f",basicsalaray);
 DA=(basicsalaray)*(0.25);
 printf("Your DA is %f\n",DA);
 HRA=(basicsalaray)*(0.15);
 printf("Your HRA is %f\n",HRA);
 grosssalary=basicsalaray+DA+HRA;
 printf("Your gross salary is %f\n",grosssalary);
 Fund=grosssalary*(0.1);
 printf("Your Fund is %f\n",Fund);
 netsalaray=basicsalaray+DA+HRA-Fund;
 printf("Your Net salary is %f\n",netsalaray);
}