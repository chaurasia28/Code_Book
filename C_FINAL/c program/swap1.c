//program to swap two number:
#include<stdio.h>
void main()
{int a,b,temp;
printf("enter the  first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("value of a=%d\n value of b=%d",a,b);
}
