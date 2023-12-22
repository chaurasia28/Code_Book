//Program to check whether number is palindrome or not:
#include<stdio.h>
void main()
{
    int n,a,rem,rev=0;
    printf("Enter the number");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(a==rev)
    {
        printf(" %d Palindrome",a);
    }
    else
    {
        printf(" %d Not palindrome",rev);
    }

}
