//program to count the digits in a number and then print the reverse of the number also:
#include<stdio.h>
void main()
{int n,i,r,count,rev=0;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    count++;
}
printf("reverse of a number=%d",rev);
printf("count of digit=%d",count);


}
