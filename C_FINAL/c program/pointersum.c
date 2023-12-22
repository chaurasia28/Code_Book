//program to add two number by using pointer:
#include<stdio.h>
void main()
{
    int a,b,sum=0;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    sum=(*p)+(*q);
    printf("Sum=%d",sum);

}
