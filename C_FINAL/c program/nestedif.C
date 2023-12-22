//program whether the person is eligible for bunjee jumping:
#include<stdio.h>
int main()
{int age,wt;
printf("enter the age of person");
scanf("%d",&age);
printf("enter the weight of person");
scanf("%d",&wt);
if (age>=15)
{
if (wt>=40 && wt<=100)
printf("eligible\n");
else
printf("not eligible\n");
}
else
printf("not eligible\n");
return 0;
}
