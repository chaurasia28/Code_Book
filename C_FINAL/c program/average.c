#include<stdio.h>
void main()
{float hindi,math,sst,science,english,total,percentage;
printf("enter the marks of hindi");
scanf("%f",&hindi);
printf("enter the marks of math");
scanf("%f",&math);
printf("enter the marks of sst");
scanf("%f",&sst);
printf("enter the marks of science");
scanf("%f",&science);
printf("enter the marks of english");
scanf("%f",&english);
total=hindi+math+sst+science+english;
printf("total marks=%0.2f",total);
percentage=total/5;
printf("percentage obtained=%0.2f",percentage);
}
