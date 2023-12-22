//program for calculating the factorial of given number:
#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("Enter the n number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d=%d",n,fact);
}
