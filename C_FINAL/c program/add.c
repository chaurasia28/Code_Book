//program to add first and last digit of any given number:
#include<stdio.h>
void main()
{int n,lastdigit,firstdigit;
int sum=0;
printf("enter the number");
scanf("%d",&n);
lastdigit=n%10;
while(n>=10)
{
    n=n/10;
}
firstdigit=n;
sum = firstdigit+lastdigit;
printf("%d",sum);
return 0;
}
