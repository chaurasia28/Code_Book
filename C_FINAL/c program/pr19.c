//Program for Fibonacci series:
#include<stdio.h>
void main()
{
    int a,b,c,n,i,sum=0;
    a=0;
    b=1;
    printf("Enter the nth value");
    scanf("%d",&n);
    while(i<n-2)
    {
        c=a+b;
        a=b;
        b=c;
        sum=sum+c;
        i++;
    }
    printf("Sum of Fibonacci numbers upto %d terms =%d",n,sum+1);

}
