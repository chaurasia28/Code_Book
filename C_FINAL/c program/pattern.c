#include<stdio.h>
int main()
{
 int n,r,c;
 printf("enter the matrix\n");
 scanf("%d",&n);
 printf("enter the rows");
 scanf("%d",&r);
 printf("enter the column");
 scanf("%d",&c);
 for (r=0;r<n;r++)
 {
     for (c=0;c<n;c++)
     {
         printf("#");
     }
   printf("\n");
 }
 return 0;
}
