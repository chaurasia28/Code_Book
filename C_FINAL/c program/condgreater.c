#include<stdio.h>
void main()
{
    int a,b,c,result;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    printf("enter the third number");
    scanf("%d",&c);
    result=a>b?(a>c?a:c):(b>c?b:c);
    printf("%d is greater",result);
}
