//Program to swap two number by using pointer:
#include<stdio.h>
int swap(int *,int *);
void main()
{
    int a,b;
    printf("Enter the a value");
    scanf("%d",&a);
    printf("Enter the b value");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping");
    printf("a=%d",a);
    printf("b=%d",b);
}
int swap(int *x,int *y)
{
    *x=*x+*y;
   *y=*x-*y;
    *x=*x-*y;
}
