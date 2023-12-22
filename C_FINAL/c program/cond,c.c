//program for greatest of three number:
#include<stdio.h>
void main()
{int a,b,c;
printf("enter the  first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
printf("enter the third number");
scanf("%d",&c);
if (a>=b)
{
if (a>=c)
printf("%d is greater",a);
else
printf("%d is greater",c);
}
else
{
if (b>=c)
printf("%d is greater",b);
else
printf("%d is greater",c);
}
}
