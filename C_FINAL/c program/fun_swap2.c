//program to swap two number by using call by reference:
#include<stdio.h>
void swap(int*,int*);
void main()
{
    int a,b;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Before swapping a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("After swapping a=%d,b=%d",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
