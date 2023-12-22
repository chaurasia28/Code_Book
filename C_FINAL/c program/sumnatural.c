#include<stdio.h>
void main()
{int n,i,sum;
printf("enter the number till you want to sum the natural number");
scanf("%d",&n);
sum=0;
while(i<=n)
{
    sum=sum+i;
    i=i+1;
}
printf("sum of n natural number=%d",sum);
}
