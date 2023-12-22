//program to add two number by using function:
#include<stdio.h>
int sum(int,int);//declaration or prototype
void main()//calling function
{   int a,b,result;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    result=sum(a,b);//function calling(call by value)
    printf("sum of two number=%d",result);

}
int sum(int a,int b)//function definition(called function)
{   int sum;
    sum=a+b;
    return sum;//return
}
