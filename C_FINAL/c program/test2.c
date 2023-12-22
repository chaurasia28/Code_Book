#include<stdio.h>
void main()
{
    int temperature;
    printf("enter the temperature");
    scanf("%d",&temperature);
    if(temperature<0)
    {
        printf("Freezing");
    }
    else if(temperature>0 && temperature<10)
    {
        printf("very cold");
    }
    else if(temperature>10 && temperature<20)
    {
        printf("cold");
    }
    else if (temperature>30 && temperature<40)
    {
        printf("Normal");
    }
    else
        {printf("too hot");
        }
}
