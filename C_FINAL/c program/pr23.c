//Program to display odd number and its sum:
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the nth value");
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
    {
        if (i%2!=0)
        {   sum=sum+i;
            printf("%d ",i);
        }
    }
    printf("Sum of odd  number upto %d terms :%d\n",n,sum);
}
