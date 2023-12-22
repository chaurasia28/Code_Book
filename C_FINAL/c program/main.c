//program for no of days in a month:
#include<stdio.h>
void main()
{int ch,year;
printf("enter the month");
scanf("%d",&ch);
switch(ch)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
        printf("this is a month of 31 days");
        break;
case 4:
case 6:
case 9:
case 11:
        printf("this is a month of 30 days");
        break;
case 2:
        printf("enter the year");
        scanf("%d",&year);
        if ((year%4==0&&year%100!=0)||year%400==0)
            printf("leap year");
        else
            printf("not leap year");
        break;
default:
        printf("exit");       
    }

}
