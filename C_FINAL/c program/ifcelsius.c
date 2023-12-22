//program to read temperature in farenheit and convert it into celsius then range then and print what type of climate by the following :
#include<stdio.h>
void main()
{float f,c;
int ch;
printf("enter the value in farenheit to convert into celsius");
scanf("%f",&f);
c=((f-32)*5)/9;
if (c>=0 && c<=10)
    printf("very cold");
else if (c>=10 && c<=20)
    printf("cold");
else if (c>=20 && c<=25)
    printf("moderate");
else if (c>=25 && c<=35)
    printf("hot");
else if (c>=35 && c<=40)
    printf("very hot");
}
