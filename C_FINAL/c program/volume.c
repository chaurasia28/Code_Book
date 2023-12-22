//program for volume of cylinder:
#include<stdio.h>
#define pi 3.14
void main()
{float radius,height,volume;
printf("enter the radius for cylinder");
scanf("%f",&radius);
printf("enter the height for cylinder");
scanf("%f",&height);
volume=pi*radius*radius*height;
printf("volume of cylinder=%0.2f",volume);
}
