//program for leap year:
#include<stdio.h>
void main()
{int year;
printf("enter the year");
scanf("%d",&year);
if((year%4==0&&year%100!=0)||(year%400==0))
printf("yes,%d is a leap year",year);
else
printf("no, it is not a leap year");

}
