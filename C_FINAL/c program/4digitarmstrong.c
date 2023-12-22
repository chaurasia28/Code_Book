#include<stdio.h>
#include<math.h>
void main()
{  int a,b,c1,d,rem,n;
   printf("enter the n value");
   scanf("%d",&n);
   b=n;
   while(b>0)
   {
       d=b%10;
       c1=c1+1;
       b=b/10;
   }
   a=n;
   int sum=0;
   while(n>0)
   {
      rem=a%10;
      sum=sum+pow(rem,c1);
      a=a/10;
   }
   printf("%d",sum);
   if (sum==n)
   {
       printf("%d is a armstrong",n);
   }
   else
   {
       printf("%d is not a armstrong");
   }

}
