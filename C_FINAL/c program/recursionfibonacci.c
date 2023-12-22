//Program to find the fibonacci series:
#include<stdio.h>
int fibonacci(int n);
void main()
{
    int n,result,i;
    printf("Enter the nth value for fibonacci series");
    scanf("%d",&n);
    printf("Fibonacci series=\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",fibonacci(i));
    }

}
int fibonacci(int n)
{
    int fibo;
    if(n<=1)
        return n;
    else
        fibo=fibonacci(n-1)+fibonacci(n-2);
        return fibo;
}
