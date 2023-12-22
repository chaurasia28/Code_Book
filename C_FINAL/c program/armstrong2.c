#include<stdio.h>
void main()
{
    int n,r,a,sum=0;
    printf("enter the n number");
    scanf("%d",&n);
    a=n;
    for(;n!=0;n=n/10)
    {
        r=n%10;
        sum=sum+r*r*r;

    }
    if (a==sum)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not armstrong");
    }
}
