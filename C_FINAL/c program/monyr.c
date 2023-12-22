//program to calculate total numbers of days from the month:
#include<stdio.h>
void main()
{int year;
int month;
int day_in_1=31,day_in_2,day_in_3=31,day_in_4=30,day_in_5=31,day_in_6=30,day_in_7=31,day_in_8=31,day_in_9=30,day_in_10=31,day_in_11=30,day_in_12=31;
printf("enter the year");
scanf("%d",&year);
printf("enter the month");
scanf("%d",&month);
if(year%4==0 && year%100!=0 || year%400==0)
{
   day_in_2=29;
   switch(month)
   {
case 1:
    printf("%d",day_in_1);
    break;
case 2:
    printf("%d",day_in_1+day_in_2);
    break;
case 3:
    printf("%d",day_in_1+day_in_2+day_in_3);
    break;
case 4:
    printf("%d",day_in_1+day_in_2+day_in_3+day_in_4);
    break;
case 5:
    printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5);
    break;
case 6:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6);
     break;
case 7:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7);
     break;
case 8:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7+day_in_8);
     break;
case 9:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7+day_in_8+day_in_9);
     break;
case 10:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7+day_in_8+day_in_9+day_in_10);
     break;
case 11:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7+day_in_8+day_in_9+day_in_10+day_in_11);
     break;
case 12:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7+day_in_8+day_in_9+day_in_10+day_in_11+day_in_12);
     break;
 }   }
else
{   day_in_2=28;
   switch(month)
   {
case 1:
    printf("%d",day_in_1);
    break;
case 2:
    printf("%d",day_in_1+day_in_2);
    break;
case 3:
    printf("%d",day_in_1+day_in_2+day_in_3);
    break;
case 4:
    printf("%d",day_in_1+day_in_2+day_in_3+day_in_4);
    break;
case 5:
    printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5);
    break;
case 6:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6);
     break;
case 7:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7);
     break;
case 8:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7+day_in_8);
     break;
case 9:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7+day_in_8+day_in_9);
     break;
case 10:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7+day_in_8+day_in_9+day_in_10);
     break;
case 11:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7+day_in_8+day_in_9+day_in_10+day_in_11);
     break;
case 12:
     printf("%d",day_in_1+day_in_2+day_in_3+day_in_4+day_in_5+day_in_6+day_in_7+day_in_8+day_in_9+day_in_10+day_in_11+day_in_12);
     break;

}
}
}
