//program to multiply two digit using function
#include<stdio.h>
int product(int n1,int n2);
void main()
{int n1,n2,result;
 printf("enter the number of n1");
 scanf("%d",&n1);
 printf("enter the number of n2");
 scanf("%d",&n2);
 result=product(n1,n2);
 printf("product of two number=%d",result);
}
int product(int n1,int n2)
{
    int multiply;
    multiply=n1*n2;
    return multiply;
}
