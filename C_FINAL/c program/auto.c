//Auto storage class:default value=garbage;location=stack(ram);scope=within in function/block;lifetime=within function /block
#include<stdio.h>
void main()
{
    auto int a=10;
    {
        auto int a;
        printf("value of a inside block=%d",a);//garbage value as a not define
    }
    printf("Value of a inside function block=%d",a);//value=10 as scope within the block
}
