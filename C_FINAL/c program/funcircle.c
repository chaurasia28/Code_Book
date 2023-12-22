//program to calculate the area and circumference of a circle using function:
#include<stdio.h>
#define pi 3.14
float area_circle(float);
float circumference_circle(float);
void main()
{
    float radius,result1,result2;
    printf("enter the radius");
    scanf("%f",&radius);
    result1=area_circle(radius);
    result2=circumference_circle(radius);
    printf("area of circle=%0.2f\n",result1);
    printf("circumference of circle=%0.2f\n",result2);

}
float area_circle(float radius)
{
    float area;
    area=pi*radius*radius;
    return area;
}
float circumference_circle( float radius)
{
    float circumference;
    circumference=2*pi*radius;
    return circumference;
}
