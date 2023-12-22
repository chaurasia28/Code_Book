#include<stdio.h>
void main()
{
    float basic_salary,hra,da,gross_salary;
    printf("enter the basic salary");
    scanf("%f",&basic_salary);
    if(basic_salary<1500)
    {
        hra=10*basic_salary/100;
        da=90*basic_salary/100;
    }
    else
    {    hra=1500;
         da=98*basic_salary/100;
    }
    gross_salary=basic_salary+hra+da;
    printf("gross_salary=%0.2f",gross_salary);
}
