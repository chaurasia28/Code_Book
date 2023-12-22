//program to create,initialize and use pointer:
#include<stdio.h>
void main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Enter the a value");
    scanf("%d",&a);
    printf("Enter the b value");
    scanf("%d",&b);
    printf("Accessing the value of a,b by using pointer");
    printf("value of a=%d\n",a);
    printf("value of a=%d\n",*p);
    printf("Address of a variable=%u\n",p);
    printf("Address of a variable=%u\n",&a);
    printf("value of b=%d\n",b);
    printf("value of b=%d\n",*q);
    printf("Address of b variable=%u\n",q);
    printf("Address of b variable=%u\n",&b);




}
