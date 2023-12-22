#include<stdio.h>
int prime(int );
void main()
{
    int m1,m2,m3,m4,m5,total,average;
    printf("Enter the marks of 5 subject");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    average=total/5;
    printf("Total:%d\n",total);
    printf("Average:%d\n",average);
    prime(average);
}
int prime(int average)
{
    int i=2,flag=0;
    while(i<average)
    {
        if (average%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("%d is a prime number\n",average);
    }
    else{
        printf("%d is not a prime number\n",average);
    }
}
