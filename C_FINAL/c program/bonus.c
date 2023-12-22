#include<stdio.h>
void main()
{
    float joining_year,current_year,year;
    printf("enter the joining_year");
    scanf("%f",&joining_year);
    printf("enter the current year");
    scanf("%f",&current_year);
    year=current_year-joining_year;
    if (year>3)
        {
            printf("bonus=2500");
        }

}
