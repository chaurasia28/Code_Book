//program to generate a fibonacci series:
#include<stdio.h>
void main()
{
    int a,b,c,n,i;
    printf("Enter the n value for series");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("0\n");
    printf("1\n");
    while(i<=n-2)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
        printf("%d\n",c);
    }
}
