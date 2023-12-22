#include<stdio.h>
void main()
{
    int yr;
    printf("enter the year");
    scanf("%d",&yr);
    (yr%4==0 && yr%100!=0 ||yr%400==0)?printf("leap year"):printf("not leap year");
}
