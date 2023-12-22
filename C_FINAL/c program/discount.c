#include<stdio.h>
void main()
{
    float qt,price,total;
    printf("enter the quantity of items");
    scanf("%f",&qt);
    printf("enter the prices of items");
    scanf("%f",&price);
    if (qt>1000)
    {
        total=(qt*price)-(qt*price*0.1);
        printf("total expenses=%0.2f",total);
    }
    else
    {
        total=qt*price;
        printf("total expenses=%0.2f",total);
    }
}
