#include<stdio.h>
#include<string.h>
void main()
{
    char sex,ms;
    int age;
    printf("Enter the sex ");
    scanf("%s",&sex);
    printf("Enter the ms");
    scanf("%s",&ms);
    printf("Enter the age");
    scanf("%d",&age);
    if((ms=='M')||(ms=='U'&& sex=='M'&& age>30)||(ms=='U'&& sex=='F'&& age>25))
    {
        printf("Driver is insured");
    }
    else
    {
        printf("driver is not insured");
    }
}
