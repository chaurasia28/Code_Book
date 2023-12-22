#include<stdio.h>
void main()
{float temperature,celsius;
printf("enter the temperature in fahrenheit");
scanf("%f",&temperature);
celsius=((temperature-32)*5)/9;
printf("temperature in centigrade degrees");
printf("%0.2f",celsius);
}
