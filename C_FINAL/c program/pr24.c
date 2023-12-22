#include<stdio.h>
void check(unsigned long  a);
int main()
{
    int t,i;
    unsigned long int  n;
    printf("Enter the test case");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%Lu",&n);
        check(n);
    }
}
void check(unsigned long  a)
{
    int rem,rem2,count=0,sum=0,flag=1,rev=0,store;
    unsigned long num;
    num=a;
    while(num!=0)
    {
        count=count+1;
        rem=num%10;
        if(rem==0)
        {
            flag=0;
            break;
        }
        sum=sum+rem;
        num=num/10;
    }
    if(count!=10)
    {
        flag=0;
    }
    if(flag==0)
    {
        printf("INVALID NUMBER\n");
        return;
    }
    store=sum;
    while(store!=0)
    {
        rem=store%10;
        rev=(rev*10)+rem;
        store=store/10;
    }
    if(rev==sum)
    {
        printf("%d,NUMBER IS PALINDROME\n",sum);
    }
    else{
        printf("%d,NUMBER IS NOT PALINDROME\n",sum);
    }

}
