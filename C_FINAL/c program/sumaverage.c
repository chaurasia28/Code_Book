//program in c to read 10 number from keyboard and find their sum and average:
#include<stdio.h>
void main()
{
    int i,n;
    float average,sum=0;
    printf("enter the number n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
        average=sum/i;
    }
    printf("sum=%0.2f",sum);
    printf("Average=%0.2f",average);
}
