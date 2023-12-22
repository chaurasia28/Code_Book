//program for factorial number by using recursion function:
#include<stdio.h>
int factorial(int);
int main()
{
    int n,result;
    printf("Enter the n number");
    scanf("%d",&n);
    result=factorial(n);
    printf("%d",result);
    return 0;
}
int factorial(int n)
{
    int fact;
    if (n==1)
    {
        return n;
    }
    else
    {
        fact=n*factorial(n-1);
        return fact;
     }
}
