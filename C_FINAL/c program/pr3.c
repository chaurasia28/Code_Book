#include<stdio.h>
void main()
{
    int arr[100],n,i,r1,a,count,sum=0;
    printf("Enter number");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {   r1=n%10;
        count++;
        n=n/10;
    }
    if (count%2==0)
        i=1;
    else
        i=0;

    while(a!=0)
    {
        if(i%2==0)
        {
            sum=sum+a%10;
        }
        else
        {
            sum=sum-a%10;
        }
        a=a/10;
        i++;
    }
    printf("%d",sum);


}
