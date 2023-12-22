//program for roots for quadratic equation:
#include<stdio.h>
#include<math.h>
void main()
{float a,b,c,root1,root2;
printf("enter the number a");
scanf("%f",&a);
printf("enter the number b");
scanf("%f",&b);
printf("enter the number c");
scanf("%f",&c);
d=b*b-4*a*c;
if (d>0)
{
root1=(-b+sqrt(d))/2*a;
root2=(-b-sqrt(d))/2*a;
printf("root1=%0.2f",root1);
printf("root2=%0.2f",root2);
}
else if (d==0)
{
root1=-b/(2*a);
root2=-b/(2*a);
printf("root1=%0.2f",root1);
printf("root2=%0.2f",root2);
}
else
printf("its imaginary\n");
}
