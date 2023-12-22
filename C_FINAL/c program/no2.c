#include<stdio.h>
void main()
{int n,c,r;
printf("enter the number n");
scanf("%d",&n);
printf("enter the row");
scanf("%d",&r);
printf("enter the column");
scanf("%d",&c);
for (r=1;r<=n;r++)
{
    for(c=1;c<=n;c++)
       {
           printf("%d",c);
       }
       printf("\n");
}
}
