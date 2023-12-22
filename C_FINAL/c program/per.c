#include<stdio.h>
void main()
{
    float m1,m2,m3,m4,m5,per;
    printf("enter the marks of m1");
    scanf("%f",&m1);
    printf("enter the marks of m2");
    scanf("%f",&m2);
    printf("enter the marks of m3");
    scanf("%f",&m3);
    printf("enter the marks of m4");
    scanf("%f",&m4);
    printf("enter the marks of m5");
    scanf("%f",&m5);
    per=m1+m2+m3+m4+m5;
    if(per>=60)
    {
        printf("first division");
    }
    else if(per>=50 && per<=59)
    {
        printf("second division");
    }
    else if(per>=40 && per<=49)
    {
        printf("third division");
    }
    else
    {
        printf("fails");
    }
}
