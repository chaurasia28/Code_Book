//program to check whether the  number is odd and even using case:
#include<stdio.h>
int main()
{int a;
printf("enter the number");
scanf("%d",&a);
switch(a%2==0)
{
 case 1:
       printf("%d is even",a);
       //break;

 case 0:
    {
     switch(a!=0)
       {
       case 1:
        printf(" %d is odd",a);
        break;
       case 0:
        printf("%d is even",a);
        break;
       }}
return 0;
}
}

