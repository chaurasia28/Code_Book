#include<stdio.h>
void main()
{float d,meter,feet,inch,centimeter;
printf("enter the distance between two cities in km");
scanf("%f",&d);
meter=d*1000;
feet=d*3280.83;
inch=d*39370.0787;
centimeter=d*100000;
printf("distance in meter=%0.2f",meter);
printf("distance in feet=%0.2f",feet);
printf("distance in inch=%0.2f",inch);
printf("distance in centimeter=%0.2f",centimeter);
}
