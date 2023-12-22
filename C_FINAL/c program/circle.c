//program to calculate the area and the circumference of thr circle:
#include<stdio.h>
#define pi 3.14
void main()
{float radius,circumference,area;
printf("enter the radius for circle:\n");
scanf("%f",&radius);
circumference=2*pi*radius;
area =pi*radius*radius;
printf("circumference of circle=%0.2f",circumference);
printf("area of circle=%0.2f",area);
}
