//program  to check  that a given number is Armstrong ,prime,perfect or not by using the concept of function:
#include<stdio.h>
#include<math.h>
int prime(int);
int armstrong(int);
int perfect(int);
void main()
{int n;
 printf("Enter the n number");
 scanf("%d",&n);
 prime(n);
 armstrong(n);
 perfect(n);
}
int prime( int n)
{
    int i,flag=0;
    if (n==0||n==1)
    {
        flag=1;
    }
    for(i=2;i<n;i++)
    {
        if (n%i==0)
          {
              flag=1;
              break;
          }
    }
    if (flag==1)
    {
        printf("Not prime\n");
    }
    else
    {
        printf("prime\n");
    }
}

int armstrong(int n)
{  int a,b,c1,d,rem,sum=0;
   b=n;
   while(b>0)
   {
       d=b%10;
       c1=c1+1;
       b=b/10;
   }
   a=n;
   while(a>0)
   {
      rem=a%10;
      sum=sum+pow(rem,c1);
      a=a/10;
   }
   if (sum==n)
   {
       printf("Armstrong\n");
   }
   else
   {
       printf("Not Armstrong");
   }

}
int perfect(int n)
{
    int i,rem,sum=0;
    for(i=1;i<n;i++)
    {
       rem=n%i;
       if (rem==0)
       {
        sum=sum+i;
       }
    }
    if(sum==n)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not perfect number\n");
    }

}

