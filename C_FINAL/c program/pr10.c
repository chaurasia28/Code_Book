#include<stdio.h>
void fibonacci(int);
void main()
{   int n;
    printf("Enter the nth value");
    scanf("%d",&n);
    fibonacci(n);
}
void fibonacci(int n)
{
    int a,b,c,i=0;
    if(n==1)
    {
        printf("0");
        return ;
    }
    else
    {
    printf("0 ");
    printf("1 ");
    a=0;
    b=1;
    while(i<n-2)
    {c=a+b;
    a=b;
    b=c;
    i++;
    printf("%d ",c);
    }
    }
}
