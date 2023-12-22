//program to check whether triangle is equilateral or isosceles:
#include<stdio.h>
void main()
{int a,b,c;
printf("enter the number a");
scanf("%d",&a);
printf("enter the number b");
scanf("%d",&b);
printf("enter the number c");
scanf("%d",&c);
if (a==b&&a==c&&b==c)
printf("yes,it is equilateral triangle");
else
 printf("it is isosceles triangle");

}
