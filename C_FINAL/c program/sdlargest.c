//program to find the 2nd largest number from 3 values:
#include<stdio.h>
void main()
{int a,b,c;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
printf("enter th third number");
scanf("%d",&c);
if (a>=b&&b<=c)
printf(" %d is a second largest",b);
else if (b<=a&&a<=c)
printf("%d is a second largest",a);
else
printf("%d is a second largest",c);
}
