//program to check a number is armstrong or not using for loop.
#include<stdio.h>
void main()
{int n,a,r,sum=0;
 printf("enter the value of n");
 scanf("%d",&n);
 for(a=n;n!=0;n=n/10)
 {   r=n%10;
     sum=sum+r*r*r;
 }
 if (a==sum)
 {printf("Armstrong");}
 else
 {printf("not armstrong");}
}
