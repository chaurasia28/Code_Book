//program to find a maximum between two number:
#include<stdio.h>
void main()
{int a,b;
 printf("enter the number");
 scanf("%d",&a);
 printf("enter the number");
 scanf("%d",&b);
 switch(a>b)
 {
  case 1:
         printf("%d is greater",a);
         break;
  case 2:
         switch(a<b)
         {
         printf("%d is greater",b);
         break;
         }
         break;
 }
}
