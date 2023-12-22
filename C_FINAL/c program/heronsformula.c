#include<stdio.h>
#include<math.h>
void main()
{float s,a,b,c,area;
printf("enter the value of a");
scanf("%f",&a);
printf("enter the value of b");
scanf("%f",&b);
printf("enter the value of c");
scanf("%f",&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle=%0.2f",area);
}
