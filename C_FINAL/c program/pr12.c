//Program for Armstrong number:
#include<stdio.h>
int armstrong(int );
void main()
{
    int n;
    printf("Enter the nth value");
    scanf("%d",&n);
    armstrong(n);
}
int armstrong(int n)
{   int i,a,rem,sum;
    for(i=0;i<=n;i++)
    {   sum=0;
        a=i;
        while(a!=0)
        {
            rem=a%10;
            sum=sum+rem*rem*rem;
            a=a/10;
        }

        if (i==sum)
        {
            printf("%d ",i);
        }
    }
}
