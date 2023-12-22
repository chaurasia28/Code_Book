#include<stdio.h>
void main()
{int num;
printf("enter the number\n");
scanf("%d",&num);
switch(num>0)
{
case 1:
    printf("number %d is positive",num);
    break;
case 0:
    switch(num<0)
        {case 1:
            printf("number %d is negative",num);
            break;
         case 0:
            printf("number is zero");
            break;
        }
    break;
}
}
