#include<stdio.h>
void main()
{int basic_salary,dear_allowance,house_allowance,total;
printf("enter the basic salary");
scanf("%d",&basic_salary);
dear_allowance=0.4*basic_salary;
house_allowance=0.2*basic_salary;
total=basic_salary+dear_allowance+house_allowance;
printf("total gross salary");
printf("%d",total);
}
