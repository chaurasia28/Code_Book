#include<stdio.h>
int sum(int,int);
void main()
{
    int a,b,result;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    result=sum(a,b);
    printf("Total=%d",result);
}
int sum(int a,int b)
{   int total;
    total=a+b;
    return total;
}
