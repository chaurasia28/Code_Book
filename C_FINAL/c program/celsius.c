//program to read temperature in farenheit and convert it into celsius then range then and print what type of climate by the following :
#include<stdio.h>
void main()
{float f,c;
int ch;
printf("enter the value in farenheit to convert into celsius");
scanf("%f",&f);
c=((f-32)*5)/9;
printf("1.0-10\n");
printf("2.10-20\n");
printf("3.20-25\n");
printf("4.25-35\n");
printf("5.35-40\n");
printf(" temperature in celsius %0.2f",c);
printf("select the range");
scanf("%d",&ch);
switch(ch)
{ case 1:
    printf("very cold");
    break;
  case 2:
      printf("cold");
      break;
  case 3:
    printf("moderate");
    break;
  case 4:
    printf("hot");
    break;
  case 5:
    printf("very hot");
    break;

}


}
