//program for whether the number is positive,negative,zero:
#include<stdio.h>
void main()
{int num;
printf("enter the number as per your desire\n");
scanf("%d",&num);
if (num>0)
printf("number %d is positive",num);
else if (num<0)
printf("number %d is negative",num);
else
printf("yes number is zero");
}
