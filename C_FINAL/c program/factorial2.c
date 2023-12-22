//Program to find the factorial of n number:
#include<stdio.h>
int factorial(int);
void main()
{
    int n,result;
    printf("Enter the n number");
    scanf("%d",&n);
    result=factorial(n);
    printf("Factorial of %d =%d\n",n,result);
}
int factorial(int n)
{
    int fact;
    if(n==1)
        return 1;
    else
        fact=n*factorial(n-1);
        return fact;
}
