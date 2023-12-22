#include<stdio.h>
#define pi 3.14
void main()
{float l,b,area_rect,perimeter_rect,radius,area_circle,perimeter_circle;
printf("enter the length of rectangle");
scanf("%f",&l);
printf("enter the breadth of rectangle");
scanf("%f",&b);
printf("enter the radius of circle");
scanf("%f",&radius);
area_rect=l*b;
perimeter_rect=2*(l+b);
area_circle=pi*radius*radius;
perimeter_circle=2*pi*radius;
printf("area of rectangle=%0.2f",area_rect);
printf("perimeter of rectangle=%0.2f",perimeter_rect);
printf("area of circle=%0.2f",area_circle);
printf("perimeter of circle=%0.2f",perimeter_circle);
}
