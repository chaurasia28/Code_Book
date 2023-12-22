//program for swapping of two number without third variable:
#include<stdio.h>
void main()
{int a,b;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping\n");
printf("value of a=%d",a);
printf("value of b=%d",b);
}
