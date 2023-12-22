//program to display 1st n natural number by using recursion:
#include<stdio.h>
int display(int);
void main()
{   int n;
    printf("enter the n number till you want counting");
    scanf("%d",&n);
    display(n);

}
int display(int n)
{
    if (n)
    {
       display(n-1);
    }
    else
    {
        return 1;
    }
    printf("%d\n",n);


}
