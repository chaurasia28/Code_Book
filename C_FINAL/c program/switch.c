//program for arithematic operator:
#include<stdio.h>
void main()
{int ch,a,b,sum,diff,product,divide,mod;
printf("choose any number for the arithmatic operation\n");
scanf("%d",&ch);
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
switch(ch)
{
case 1:
       sum=a+b;
       printf("sum is %d",sum);
       break;
case 2 :
       diff=a-b;
       printf("diff is %d",diff);
       break;
case 3:
       product=a*b;
       printf("product is %d",product);
       break;
case  4:
       divide=a/b;
       printf("divide is %d",divide);
       break;
case 5:
       mod=a%b;
       printf("mod is %d",mod);
       break;
default:
       printf("exit");
}
}
