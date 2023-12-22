//program for writing a table:
#include<stdio.h>
void main()
{int a,n,b;
printf("enter the table number");
scanf("%d",&n);
a=1;
do
{   b=n*a;
    printf("%d*%d=%d\n",n,a,b);
    a++;
}while(a<=10);
}
