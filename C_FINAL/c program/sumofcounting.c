#include<stdio.h>
void main()
{
    int i,n;
    int sum=0;
    printf("for sum of n number enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of n natural number=%d",sum);
}
