//Program to find the sum of n natural number by using recursion:
#include<stdio.h>
int sum(int n);
void main()
{
    int n,result;
    printf("Enter the nth value");
    scanf("%d",&n);
    result=sum(n);
    printf("Sum of n natural number=%d\n",result);
}
int sum(int n)
{
    int total;
    if (n==1)
        return 1;
    else
    total=n+sum(n-1);
    return total;
}
