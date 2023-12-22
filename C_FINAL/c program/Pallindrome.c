//program for reversing a number(Pallindrome)
#include<stdio.h>
void main()
{
    int n,rem,count,rev=0,a;
    printf("Enter the number");
    scanf("%d",&n);
    a=n;
    for (;n!=0;n=n/10)
        {
            rem=n%10;
            rev=rev*10+rem;
            count++;

        }
    printf("reverse of the number=%d\n",rev);
    printf("Count of digit=%d\n",count);
    if (a==rev)
    {
        printf("Pallindrome\n");
    }
    else
    {
        printf("Not pallindrome\n");
    }

}
