//Program for register storage class :default value=garbage value;scope=local;lifetime=Within the function and block;location=CPUregister
#include<stdio.h>
void main()
{
    register int i,a;
    for(i=1;i<=10;i++)
    {
    printf("%d\n",i);//just to make iteration fast
    }
    printf("%d\n",a);//garbage value
}
