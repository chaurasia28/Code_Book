//program for greater of three number:
#include<stdio.h>
void main()
{int a,b,c;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
printf("enter the third number\n");
scanf("%d",&c);
if (a>=b&&a>=c)
printf(" %d is greater\n ",a);
else if (b>=a&&b>=c)
printf("%d is greater\n",b);
else
printf("%d is greater\n",c);
}
