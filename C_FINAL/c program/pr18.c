//Palindrome in given range:
#include<stdio.h>
int main()
{
   int i,a,n,rem,store,rev=0,count;
   printf("Enter the first number");
   scanf("%d",&a);
   printf("enter the last number");
   scanf("%d",&n);
   for(i=a;i<=n;i++)
   {  store=i;
      rev=0;
      while(store)
      {
          rem=store%10;
          rev=rev*10+rem;
          store=store/10;
      }
       if (i==rev)
       {
           printf("%d ",i);
           count++;
       }
   }
   }
