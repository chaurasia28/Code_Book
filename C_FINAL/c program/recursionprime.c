//Program to find the prime number by using recursion
#include<stdio.h>
int prime(int ,int n);
void main()
{
    int n,x,result;
    printf("Enter the any number");
    scanf("%d",&n);
    x=n/2;
    result=prime(n,x);
    if (result==1)
    {
        printf("Number %d is prime",n);
    }
    else{
        printf("Not prime ");
    }

}
int prime(int n,int x)
{
    if(x==1)
        return 1;
    if(n%x==0)
        return 0;
    return prime(n,x-1);
}
