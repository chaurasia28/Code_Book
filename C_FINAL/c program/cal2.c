//program to create simple calculator using switch case:
#include<stdio.h>
void main()
{int ch,a,b,sum,diff,product,divide,mod;
printf("enter the choice for arithmatic operator");
scanf("%d",&ch);
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
switch(ch)
{case 1:
    sum=a+b;
    printf("sum is %d",sum);
    break;
 case 2:
     diff=a-b;
     printf("difference is %d",diff);
     break;
 case 3:
    product=a*b;
    printf("product is %d",product);
    break;
 case 4:
    divide=a/b;
    printf("divide is %d",divide);
    break;
 case 5:
    mod=a%b;
    printf("modulus is %d",mod);
    break;
 default:
    printf("exit");

}

}
