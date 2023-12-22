#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the table number");
    scanf("%d",&n);
    printf("Table of %d\n",n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
