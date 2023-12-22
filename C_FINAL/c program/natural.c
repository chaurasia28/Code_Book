//program to give a sum of natural number:
#include<stdio.h>
void main()
{int n,i,sum=0;
printf("enter the last no till you want sum");
scanf("%d",&n);
for(i=1;i<=n;i++)
{sum=sum+i;
}
printf("sum=%d",sum);
}
