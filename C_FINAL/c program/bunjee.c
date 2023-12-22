//program for if the person is eligible or not for bunjee jumping;
#include<stdio.h>
void main()
{int age,wt,ht;
printf("enter the age");
scanf("%d",&age);
printf("enter the weight");
scanf("%d",&wt);
printf("enter the height");
scanf("%d",&ht);
if (age>=15)
{if (wt>=40)
{
    if(ht>=175)
       {
        printf("eligible");
       }
    else
    {
        printf("not eligible");
    }
}
}
else
   printf("not eligible");
}
