//program for sum of n natural number by using recursion:
#include<stdio.h>
int sum(int);
int main()
{   int n,result;
    printf("Enter the n number");
    scanf("%d",&n);
    result=sum(n);
    printf("%d",result);
    return 0;
}
int sum(int n)
{  int total;
           if (n==1)
           {
             return n;
           }
           else
           {
            total=n+sum(n-1);
            return total;
           }
}
