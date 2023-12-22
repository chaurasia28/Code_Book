//program for adding,subtraction,multiplication,division of two number:
#include<stdio.h>
void main()
{int a,b,sum,sub,product,division,mod;
printf("enter the first number \n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
sum=a+b;
sub=a-b;
product=a*b;
division=a/b;
mod=a%b;
printf("sum=%d\n",sum);
printf("sub=%d\n",sub);
printf("product=%d\n",product);
printf("division=%d\n",division);
printf("modulus=%d\n",mod);
}
